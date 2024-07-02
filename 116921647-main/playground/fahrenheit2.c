// Kenjiro Otake
// 11.2.2022
// Period 8
// Farenheit2 Lab

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    float F = '\0';
    float C = '\0';

    if (argc > 2)
    {
        float s = atof(argv[2]);

        if ((strcmp(argv[1], "c") == 0))
        {
            C = (s - 32) * 5 / 9;
            printf("%.1fºF = %.1fºC\n", s, C);
            return 0;
        }
        else if ((strcmp(argv[1], "f") == 0))
        {
            F = (s * 9 / 5) + 32;
            printf("%.1fºC = %.1fºF\n", s, F);
            return 0;
        }
        else
        {
            printf("Error! No valid conversion was specified or a temperature was not entered!\n");
            return 1;
        }
    }
    else
    {
        printf("Error! No valid conversion was specified or a temperature was not entered!\n");
        return 2;
    }
}