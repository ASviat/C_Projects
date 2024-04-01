#include <stdio.h>

int main(void)
{
    int number, counter = 0;
    printf("Enter number: ");

    for (scanf("%d", &number); number > 0; number /= 10)
    {
        counter++;
    }
    counter == 3 ? printf("True") : printf("False");

    return 0;
}