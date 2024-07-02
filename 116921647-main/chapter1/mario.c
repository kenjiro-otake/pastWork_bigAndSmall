// Kenjiro Otake
// 11.29.2022
// Period 8
// Mario Lab

// imports required functions
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height of pyramid: ");
    } while (height < 1 || height > 8);

    // enter a corresponding value for each position of space[] for the number of spaces before the first # is printed in each row
    int space[height];
    for (int j = 0, i = 1, h = height; i <= h; j++, i++)
    {
        space[j] = h - i;
    }

    // enter a corresponding value for each position of hash[] for the number of #'s printed for each row
    int hash[height];
    for (int j = 0, i = 1; j <= height - 1; j++, i++)
    {
        hash[j] = i;
    }

    // print number of spaces in space[0], print number of # in hash[0], space, print number of # in hash[0], \n
    // repeats however many times the number height is
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < space[i]; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < hash[i]; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < hash[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    /* hash art d('_')d

       #  #       #  #       #  #       #  #
      ##  ##     ##  ##     ##  ##     ##  ##
     ###  ###   ###  ###   ###  ###   ###  ###
    ####  #### ####  #### ####  #### ####  ####

    */
}
