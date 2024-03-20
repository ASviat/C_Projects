#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter three numbers to multiply them up in format: x y z\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d * %d * %d = %d", num1, num2, num3, num1 * num2 * num3);

    return 0;
}