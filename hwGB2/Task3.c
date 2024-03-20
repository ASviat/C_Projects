#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter two numbers to deduct second from first in format: first second\n");
    scanf("%d %d", &num1, &num2);
    printf("%d - %d = %d", num1, num2, num1 - num2);

    return 0;
}