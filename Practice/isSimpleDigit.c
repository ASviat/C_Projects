#include <stdio.h>

int main(void)
{
    int number, counter = 0;
    scanf("%d", &number);

    if (number == 1 || number == 2)
    {
        printf("It's simple number");
    }
    else if (number <= 0)
    {
        printf("Invalid number");
    }
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                printf("It's not simple number");
                counter++;
                return 0;
            }
        }
        printf("It's simple number");
    }

    return 0;
}