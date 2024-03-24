#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter number to know the time of the year it belongs to: ");
    scanf("%d", &num);
    if (num <= 0 || num > 12)
        printf("Invalid data");
    else
    {
        if (num == 12 || num == 1 || num == 2)
            printf("Winter");
        if (num >= 3 && num <= 5)
            printf("Spring");
        if (num >= 6 && num <= 8)
            printf("Summer");
        if (num >= 9 && num <= 11)
            printf("Autumn");
    }

    return 0;
}