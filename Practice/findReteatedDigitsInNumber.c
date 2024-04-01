#include <stdio.h>

#define BASE 16

int main(void)
{
    int a, num;
    int flag = 0;

    for (scanf("%x", &a); a > 0 && !flag; a /= BASE)
    {
        num = a % BASE;
        for (int other_num = a / BASE; other_num > 0 && !flag; other_num /= BASE)
        {
            flag = (num == other_num % BASE) ? 1 : 0;
        }
    }

    flag ? printf("YES\n") : printf("NO\n");

    return 0;
}