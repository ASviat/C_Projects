#include <stdio.h>

int middle(int x, int y)
{
    return (x + y) / 2;
}

int main(void)
{
    int x, y;
    printf("Enter 2 digits: \n");
    scanf("%d%d", &x, &y);
    printf("\n%d", middle(x, y));

    return 0;
}