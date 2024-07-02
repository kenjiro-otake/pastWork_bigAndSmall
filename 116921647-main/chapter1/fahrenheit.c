// Kenjiro Otake
// 11.2.2022
// Period 8
// Farenheit Lab

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char conv = '\0';
    float F;
    float C;

    printf("\n");
    printf("Hello, would you like to convert from Celsius to Fahrenheit or from Fahrenheit to Celsius?\n");
    // while-loop keeps asking the user for a certain character; prevents the user from typing a random character and skipping to the end
    // https://www.cs.utah.edu/~germain/PPS/Topics/while_loops.html
    while (conv != 'c' && conv != 'f')
    {
        conv = get_char("Please type 'c' to convert from Cº to Fº, type 'f' to convert from Fº to Cº: ");
    }
    if (conv == 'f')
    {
        printf("\n");
        printf("Converting from Fº to C.º\n");
        // bolded characters to be printed to terminal: https://stackoverflow.com/questions/71274207/how-to-bold-text-in-c-program#:~:text=The%20%5Ce%20is%20the%20ESC,display%20attributes%2C%20which%20resets%20bold.
        F = get_float("Please enter the value in \e[1mFahrenheit\e[m to be converted to Celsius: ");
        // temperature conversions: https://www.almanac.com/temperature-conversion-celsius-fahrenheit
        C = (F - 32) * 5 / 9;
        printf("\n");
        printf("In order to convert Fahrenheit to Celsius, subtract 32 and multiply by 5/9.\n");
        printf("%.1fºF is %.1fºC when converted.\n", F, C);
        printf("\n");
    }
    else if (conv == 'c')
    {
        printf("\n");
        printf("Converting from Cº to F.º\n");
        C = get_float("Please enter the value in \e[1mCelsius\e[m to be converted to Fahrenheit: ");
        F = (C * 9 / 5) + 32;
        printf("\n");
        printf("In order to convert Celsius to Fahrenheit, multiply by 9/5 and add 32.\n");
        printf("%.1fºC is %.1fºF when converted.\n", C, F);
        printf("\n");
    }
}