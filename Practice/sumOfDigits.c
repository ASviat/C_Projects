#include <stdio.h>

int main(void)
{
    int number, sum = 0;
    printf("Enter number:\n");
    for (scanf("%d", &number); number > 0; number /= 10)
    {
        if (sum > 10)
            break;

        sum += number % 10;
    }
    sum == 10 ? printf("YES") : printf("NO");

    return 0;
}