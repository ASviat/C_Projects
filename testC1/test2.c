#include <stdio.h>

int main(void)
{
    int x = 49, y = -5, e = 200, g;
    char c = 100, d = 200;

    printf("c + d = %d\n", c + d);
    printf("unsigned char c + unsigned char d = %d\n", (unsigned char)c + (unsigned char)d);
    printf("char c + int e = %d\n", c + e);
    printf("char d + int e = %d\n", d + e);
    printf("(float) x / y = %f", (float)x / y);

    return 0;
}