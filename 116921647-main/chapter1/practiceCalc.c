// Kenjiro Otake
// 11.8.2022
// Period 8
// Practice Calculator Lab

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    int y;

    x = get_int("Enter a value for x: ");
    y = get_int("Enter a value for y: ");

    printf("%i + %i = %i\n", x, y, x+y);
    printf("%i - %i = %i\n", x, y, x-y);
    printf("%i * %i = %i\n", x, y, x*y);
    printf("%i / %i = %i\n", x, y, x/y);
    printf("%i / %i results in a remainder of %i\n", x, y, x%y);
}