// Kenjiro Otake
// 11.15.2022
// Period 8
// ISBN Lab

// imports required functions
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long isbn = get_long("Enter ISBN: "); // prompts user for an ISBN-10 value

    int tenth = isbn % 10; // take the last digit by modulo

    int check = 0;
    for (int i = 9; i > 0; i--)
    {
        isbn = isbn / 10;
        check = check + (i * (isbn % 10));
    }                   // find the sum of each digit multiplied by their place in the ISBN
    check = check % 11; // find the remainder of the check (sum) when divided by 11
    if (check == tenth) // yes or no verdict depending on if the isbn last digit is equal to the check/11
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}