#include <stdio.h>
#define MAX 500   // 位数上限

// 高精度加法: sum += add
void big_add(int sum[], int *sum_len, int add[], int add_len) {
    int carry = 0, i;
    for (i = 0; i < *sum_len || i < add_len || carry; i++) {
        if (i == *sum_len) sum[(*sum_len)++] = 0;
        int temp = sum[i] + (i < add_len ? add[i] : 0) + carry;
        sum[i] = temp % 10;
        carry = temp / 10;
    }
}

// 高精度乘法: fact *= x
void big_mul(int fact[], int *fact_len, int x) {
    int carry = 0;
    for (int i = 0; i < *fact_len; i++) {
        int temp = fact[i] * x + carry;
        fact[i] = temp % 10;
        carry = temp / 10;
    }
    while (carry) {
        fact[(*fact_len)++] = carry % 10;
        carry /= 10;
    }
}

int main() {
    int fact[MAX] = {1};  // 阶乘当前值
    int fact_len = 1;
    int sum[MAX] = {0};   // 阶乘和
    int sum_len = 1;
	int n;
	scanf("%d",&n);

	
    for (int i = 1; i <= n; i++) {
        big_mul(fact, &fact_len, i);       // fact *= n
        big_add(sum, &sum_len, fact, fact_len); // sum += fact
    }

    for (int i = sum_len - 1; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");
    return 0;
}
	
	
	
	




