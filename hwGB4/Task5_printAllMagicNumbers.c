#include <stdio.h>

int main(void)
{
    unsigned int number, sum = 0, multiply = 1;
    printf("Enter number above 10 (x > 10):\n");
    scanf("%d", &number);
    for (int i = 11; i <= number; i++)
    {
        int temp = i;
        for (temp; temp > 0; temp /= 10)
        {
            sum += temp % 10;
            multiply *= temp % 10;
        }
        sum == multiply ? printf("%d ", i) : printf("");
        sum = 0;
        multiply = 1;
    }

    return 0;
}