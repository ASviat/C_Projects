#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter three numbers to find it's average in float: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The result is: %.2f\n", (num1 + num2 + num3) / 3.);

    return 0;
}