#include <stdio.h>

int main(void)
{
    int num1, num2, sum = 0;
    printf("Enter 2 digits (a <= b):\n");
    scanf("%d%d", &num1, &num2);
    if (num1 <= num2)
    {
        for (num1; num1 <= num2; num1++)
        {
            sum += num1 * num1;
        }
        printf("Result: %d", sum);
    }
    else
    {
        printf("Invalid numbers entered");
    }

    return 0;
}