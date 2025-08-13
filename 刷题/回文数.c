#include <stdio.h>
#include <string.h>

int n, a[101], b[101], ans, i;

// ������sת��Ϊ��������a
void init(int a[]) {
    char s[101];
    scanf("%d", &n);
	scanf("%s",s);  // ������ƺ��ַ���
    memset(a, 0, sizeof(a));  // ����a��0
    a[0] = strlen(s);  // ��a[0]�洢�ַ������ȣ�λ����
    
    for (i = 1; i <= a[0]; i++) {
        // ���ַ���β����ʼ����ת��Ϊ����
        if (s[a[0] - i] >= '0' && s[a[0] - i] <= '9') {
            a[i] = s[a[0] - i] - '0';
        } else {
            a[i] = s[a[0] - i] - 'A' + 10;
        }
    }
}

// �б���������a�Ƿ�Ϊ������
int check(int a[]) {
    for (i = 1; i <= a[0]; i++) {
        if (a[i] != a[a[0] - i + 1]) {
            return 0;  // ���ǻ�����
        }
    }
    return 1;  // �ǻ�����
}

// ��������a���䷴����b����n���Ƽӷ�����
void jia(int a[]) {
    // ���ɷ�����b
    for (int i = 1; i <= a[0]; i++) {
        b[i] = a[a[0] - i + 1];
    }
    
    // ��λ���
    for (int i = 1; i <= a[0]; i++) {
        a[i] += b[i];
    }
    
    // �����λ
    for (int i = 1; i <= a[0]; i++) {
        a[i + 1] += a[i] / n;
        a[i] %= n;
    }
    
    // ����λ��������н�λ��
    if (a[a[0] + 1] > 0) {
        a[0]++;
    }
}

int main() {
    init(a);
    
    // ��ʼ����Ƿ�Ϊ������
    if (check(a)) {
    	printf("STEP=0\n");
        return 0;
    }
    
    ans = 0;  // ������ʼ��Ϊ0
    
    // ��ೢ��30��
    while (++ans <= 30) {
        jia(a);
        if (check(a)) {
            printf("STEP=%d\n", ans);
            return 0;
        }
    }
    
    // ����30��δ�ҵ�������
    printf("Impossible\n");
    return 0;
}


