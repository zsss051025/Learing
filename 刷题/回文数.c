#include <stdio.h>
#include <string.h>

int n, a[101], b[101], ans, i;

// 将数串s转化为整数数组a
void init(int a[]) {
    char s[101];
    scanf("%d", &n);
	scanf("%s",s);  // 读入进制和字符串
    memset(a, 0, sizeof(a));  // 数组a清0
    a[0] = strlen(s);  // 用a[0]存储字符串长度（位数）
    
    for (i = 1; i <= a[0]; i++) {
        // 从字符串尾部开始处理，转换为数字
        if (s[a[0] - i] >= '0' && s[a[0] - i] <= '9') {
            a[i] = s[a[0] - i] - '0';
        } else {
            a[i] = s[a[0] - i] - 'A' + 10;
        }
    }
}

// 判别整数数组a是否为回文数
int check(int a[]) {
    for (i = 1; i <= a[0]; i++) {
        if (a[i] != a[a[0] - i + 1]) {
            return 0;  // 不是回文数
        }
    }
    return 1;  // 是回文数
}

// 整数数组a与其反序数b进行n进制加法运算
void jia(int a[]) {
    // 生成反序数b
    for (int i = 1; i <= a[0]; i++) {
        b[i] = a[a[0] - i + 1];
    }
    
    // 逐位相加
    for (int i = 1; i <= a[0]; i++) {
        a[i] += b[i];
    }
    
    // 处理进位
    for (int i = 1; i <= a[0]; i++) {
        a[i + 1] += a[i] / n;
        a[i] %= n;
    }
    
    // 修正位数（如果有进位）
    if (a[a[0] + 1] > 0) {
        a[0]++;
    }
}

int main() {
    init(a);
    
    // 初始检查是否为回文数
    if (check(a)) {
    	printf("STEP=0\n");
        return 0;
    }
    
    ans = 0;  // 步数初始化为0
    
    // 最多尝试30步
    while (++ans <= 30) {
        jia(a);
        if (check(a)) {
            printf("STEP=%d\n", ans);
            return 0;
        }
    }
    
    // 超过30步未找到回文数
    printf("Impossible\n");
    return 0;
}


