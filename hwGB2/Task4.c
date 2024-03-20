#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a four-digit number to find out the average of the digits\n");
    scanf("%d", &number);

    printf("\nResult: %.2f", ((number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10)) / 4.f);

    return 0;
}