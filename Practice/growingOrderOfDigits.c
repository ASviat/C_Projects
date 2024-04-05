#include <stdio.h>

_Bool growingOrder(unsigned long long int number);

int main(void)
{
    unsigned long long int number;
    printf("What number would you like to check?\n");
    scanf("%llu", &number);
    printf("\n%d", growingOrder(number));

    // printf("%llu\n", number);

    return 0;
}

_Bool growingOrder(unsigned long long int number)
{
    unsigned long long int number2 = number;
    unsigned long long int counter = 0;
    for (number; number > 0; number /= 10)
    {
        counter = number != 0 ? counter += 1 : counter;
    }
    printf("Counter = %llu", counter);
    unsigned long long int current = number2%10;
    for (int i = 1, c = 100; i <= counter; i++, c *= 10)
    {
        current = current > number2%c? number2%c: 
    }
    return 1;
}
