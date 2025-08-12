#include <stdio.h>

int main() {
    int a, n, m, x;
    int b;
    int f[20]; // f 数组足够大即可

    scanf("%d%d%d%d", &a, &n, &m, &x);

    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n - 1; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    b = (m - (f[n - 3] + 1) * a) / (f[n - 2] - 1);

    printf("%d\n", (f[x - 2] + 1) * a + (f[x - 1] - 1) * b);

    return 0;
}










