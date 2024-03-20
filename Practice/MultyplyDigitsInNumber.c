#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter three-digit number: \n");
    scanf("%d", &number);
    printf("Result: %d", (number / 100) * ((number % 100) / 10) * (number % 10));

    return 0;
}