// Kenjiro Otake
// 11.2.2022
// Period 8
// calc lab

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 4)
    {
        float oA = atof(argv[1]);
        float oB = atof(argv[3]);

        if (argv[2][0] == '+')
        {
            float answer = oA + oB;
            printf("%f\n", answer);
            return 0;
        }
        else if (argv[2][0] == '-')
        {
            float answer = oA - oB;
            printf("%f\n", answer);
            return 0;
        }
        else if (argv[2][0] == '/')
        {
            float answer = oA / oB;
            printf("%f\n", answer);
            return 0;
        }
        else if (argv[2][0] == 'x')
        {
            float answer = oA * oB;
            printf("%f\n", answer);
            return 0;
        }
        else if (argv[2][0] == '%')
        {
            int q = (int)(oA / oB);
            float answer = oA - (oB * q);
            printf("%f\n", answer);
            return 0;
        }
        else
        {
            printf("Error: No valid operand(s) or a conversion was specified\n");
            return 1;
        }
    }
    else
    {
        printf("Error: No valid operand(s) or a conversion was specified\n");
        return 1;
    }
}