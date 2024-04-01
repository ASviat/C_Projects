#include <stdio.h>

int main(void)
{
    _Bool flag = 0;
    if (flag)
        printf("If (flag) %d", flag);
    if (!flag)
    {
        printf("If (!flag) %d", flag);
    }

    return 0;
}