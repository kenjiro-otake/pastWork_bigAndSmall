// Kenjiro Otake
// 11.8.2022
// Period 8
// Population Lab

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Declare variables (startPop, endPop, years)
    long sPop = 0;
    long ePop = 0;
    long years = 0;

    // TODO: Prompt for population start size
    printf("\n");
    while (sPop < 9)
    {
        sPop = get_long("Starting corgi population: ");
    }

    // TODO: Prompt for population end size
    printf("\n");
    while (ePop < sPop)
    {
        ePop = get_long("Ending corgi population: ");
    }

    // TODO: Calculate number of years until we reach threshold
    // until starting population is more than ending population, repeat the calculatio for yearly compounded increase in population?
    // until start >= end, calculate start = start + start/3 - start/4, increasing the years by 1 every time the calculation is run once?
    while (sPop < ePop)
    {
        sPop = sPop + sPop / 3 - sPop / 4;
        years = years + 1;
    }

    // TODO: Print number of years
    printf("\n");
    printf("Years: %li\n", years);
    printf("\n");
}