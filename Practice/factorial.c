#include <stdio.h>

unsigned int factorial(int n)
{
    unsigned int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    unsigned int number;
    printf("Enter number to find it's factorial: ");
    scanf("%d", &number);
    printf("\nFaktorial of %d = %d", number, factorial(number));

    return 0;
}