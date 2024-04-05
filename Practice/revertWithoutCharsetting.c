#include <stdio.h>

int main(void)
{
    unsigned int n, m = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        m = m * 10 + n % 10; // 0 + n Xi1
        printf("%d ", m);
        n = n / 10;
    }
    printf("\n");
    printf("%d", m);

    return 0;
}