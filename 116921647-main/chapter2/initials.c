// Kenjiro Otake
// 11.23.2022
// Period 8
// Initials Lab

// imports required functions
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string f = get_string("Name: ");

    int x = strlen(f);

    char ff[x];
    ff[0] = ' ';
    for (int i = 1; i <= x; i++)
    {
        ff[i] = f[i-1];
    }

    char initials[x];
    for (int i = 0; i <= x; i++)
    {
        if (isspace(ff[i]) && isalpha(ff[i + 1]))
        {
            initials[i] = toupper(ff[i+1]);
        }
        else
        {
            initials[i] = '0';
        }
    }

    for (int i = 0; i <= x; i++)
    {
        if (isalpha(initials[i]))
        {
            printf("%c", initials[i]);
        }
    }
    printf("\n");
}