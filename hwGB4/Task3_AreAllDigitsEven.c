#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter number: \n");
    for (scanf("%d", &number); number > 0; number /= 10)
    {
        if (number % 2 != 0)
        {
            printf("Not all digits are even");
            return 666;
        }
    }
    printf("All digits are even");

    return 0;
}