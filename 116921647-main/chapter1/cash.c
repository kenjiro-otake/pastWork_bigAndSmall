// Kenjiro Otake
// 11.10.2022
// Period 8
// Cash Lab

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars = '\0';
    int q = 0;
    int d = 0;
    int n = 0;
    int p = 0;
    int r = 0;

    printf("\n");
    do
    {
        dollars = get_float("Change owed: ");
    } while (dollars < 0);

    int cents = round(dollars * 100);

    q = cents / 25;
    cents = cents % 25;
    d = cents / 10;
    cents = cents % 10;
    n = cents / 5;
    cents = cents % 5;
    p = cents / 1;
    cents = cents % 1;

    printf("Minimum coins for change: %i\n", q + d + n + p);
    printf("\n");
}