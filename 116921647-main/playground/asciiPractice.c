// Kenjiro Otake
// 12.6.2022
// Period 8
// ascii practice

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int convert_to_ASCII(char a);
int convert_to_char(int a);

int main(void)
{
    char x = get_char("Enter a character: \n");
    int y = get_int("Enter a ASCII number: \n");

    char b = convert_to_ASCII(x);
    int c = convert_to_char(y);
    printf("The ASCII number for the character is: %i \n", b);
    printf("The character for the ASCII number is: %c \n", c);
}

int convert_to_ASCII(char a)
{
    int ASCII = (int)a;
    return ASCII;
}

int convert_to_char(int a)
{
    char c = a;
    return c;
}