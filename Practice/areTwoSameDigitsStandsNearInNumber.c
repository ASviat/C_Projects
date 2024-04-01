#include <stdio.h>

int main(void)
{
    int number, currentDigit;
    printf("Enter number: ");
    scanf("%d", &number);
    _Bool flag = 0;

    do
    {
        currentDigit = number % 10;
        flag = number % 10 == (number / 10) % 10 ? 1 : 0;
        if (flag == 1)
            break;
        number /= 10;

    } while (number /= 10 != 0);

    flag ? printf("True") : printf("False");

    return 0;
}