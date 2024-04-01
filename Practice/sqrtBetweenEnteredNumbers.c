#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);
    printf("\nEntered numbers are: %d %d\n", num1, num2);
    printf("Result: ");
    for (num1; num1 <= num2; num1++)
    {
        printf("%d ", num1 * num1);
    }

    return 0;
}