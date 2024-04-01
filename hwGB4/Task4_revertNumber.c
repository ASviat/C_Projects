#include <stdio.h>

int main(void)
{
    unsigned int number;
    printf("Enter number: \n");
    for (scanf("%d", &number); number > 0; number /= 10)
    {
        {
            printf("%d", number % 10);
        }
    }

    return 0;
}