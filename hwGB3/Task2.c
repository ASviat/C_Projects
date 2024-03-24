#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5;

    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    int min = num1 < num2 ? num1 : num2;
    min = min < num3 ? min : num3;
    min = min < num4 ? min : num4;
    min = min < num5 ? min : num5;

    printf("Min number is : %d", min);


    return 0;
}