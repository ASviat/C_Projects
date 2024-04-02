#include <stdio.h>

int main(void)
{
    char c = '1';
    int sum = 0;
    sum += c - 0x30; // дает десятичное значение
    sum += c - '0'; // код символа минус код символа = число
    printf("%c\n", c);
    printf("%d\n", sum);

    return 0;
}