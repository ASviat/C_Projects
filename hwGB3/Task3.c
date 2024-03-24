#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf(num1 > num2 ? "False" : num2 > num3 ? "False" : "True");

    return 0;
}