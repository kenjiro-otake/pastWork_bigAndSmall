// Kenjiro Otake
// 11.10.2022
// Period 8
// for Loop Practice

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int sum = 0;
    for (int num = 1; num < 11; num++)
    {
        sum = sum + num;
    }

    printf("%i\n", sum);

    double prod = 1, num = 2;
    for (int i = 1; i < 11; i++)
    {
        prod = prod * num;
    }
    printf("%.f\n", prod);

    prod = 1;
    double base = get_double("Enter base: \n");
    double exp = get_double("Enter exponent: \n");
    for (int i = 1; i < exp; i++)
    {
        prod = prod * base;
    }

    printf("%.f\n", prod);
}