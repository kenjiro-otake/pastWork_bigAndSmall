// Kenjiro Otake
// 11.18.2022
// Period 8
// String Practice

// imports required functions
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string f = get_string("First name: ");
    for (int i = 0; i < strlen(f); i++)
    {
        printf("%c\n", toupper(f[i]));
    }
}