#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#define ASCII_ESC 27

void gameMode1(int gameMode, float fish, float trueClickVal, int *returnGM, float *returnFish);

int main(void)
{
    // array for upgrade values
    float upgradeVal[15] = {1, 2, 4, 8, 0.05, 12, 0.10, 25, 0.15, 0.25, 2.0, 1000, 5000, 4.0, 100000};

    // array for upgrade costs
    long upgradeCost[15] = {100, 500, 1000, 2000, 5000, 8000, 14000, 23000, 35000, 50000, 1000000, 100000, 1000000, 400000000, 10000000000000};

    // array for upgrade levels
    int upgradeLvl[15];

    printf("Kitty Klicker \n");
    // https://www.asciiart.eu/animals/cats, Art by myflix
    printf(".==============================================.\n");
    printf("|                                              |\n");
    printf("|                           .'\\                |\n");
    printf("|                          //  ;               |\n");
    printf("|                         /'   |               |\n");
    printf("|        .----..._    _../ |   \\               |\n");
    printf("|         \'---._ `.-'      `  .'               |\n");
    printf("|          `.    '              `.             |\n");
    printf("|            :            _,.    '.            |\n");
    printf("|            |     ,_    (() '    |            |\n");
    printf("|            ;   .'(().  '      _/__..-        |\n");
    printf("|            \\ _ '      __  _.-'--._           |\n");
    printf("|            ,'.'...____'::-'  \\    `'         |\n");
    printf("|           / |   /         .---.              |\n");
    printf("|     .-.  '  '  / ,---.   (     )             |\n");
    printf("|    / /       ,' (     )---`-`-`-.._          |\n");
    printf("|   : '       /  '-`-`-`..........--'\\         |\n");
    printf("|   ' :      /  /                     '.       |\n");
    printf("|   :  |    |  .'         o             \\      |\n");
    printf("|    |  '  .' /          o       .       '     |\n");
    printf("|     |  `.|  :      ,    : _o--'.\\      |     |\n");
    printf("|      `. /  '       ))    (   )  \\>     |     |\n");
    printf("|        ;   |      ((      \\ /    \\___  |     |\n");
    printf("|        ;   |      _))      `'.-'. ,-'` '     |\n");
    printf("|        |    `.   ((`            |/    /      |\n");
    printf("|        \\     ).  .))            '    .       |\n");
    printf("|     ----`-'-'  `''.::.________:::mx'' ---    |\n");
    printf("|                                              |\n");
    printf("|                                              |\n");
    printf("|                                              |\n");
    printf("'=============================================='\n");
    printf("\n");
    string startStr = get_string("Type 'start' to play: ");
    printf("\n");

    int gameMode = 0;
    int returnGM = '\0';
    float fish = 100000;
    float returnFish = '\0';
    float baseClickVal = 1;
    float trueClickVal = 1;

    if (strcasecmp(startStr, "start") == 0)
    {
        printf("Hit 'enter' to start collecting fish\n");
        printf("Type 'u' to upgrade fish collecting power\n");
        printf("Type 'e' to leave the game\n");
        printf("%c7", ASCII_ESC);
        gameMode = 1;
        gameMode1(gameMode, fish, trueClickVal, &returnGM, &returnFish);
        gameMode = returnGM;
        fish = returnFish;
    }
    else
    {
        printf("Error: incorrect start syntax\n");
        return 1;
    }

    while (gameMode == 2)
    {
        printf("%c8", ASCII_ESC);
        printf("%c[0J", ASCII_ESC);
        printf("\n");
        printf("Enter the # next to the upgrade to increase fish/click:\n");
        printf("Type '0' to return to the game\n");
        printf("\n");
        printf("1 -- Sharper Claws +1 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[0], upgradeCost[0]);
        printf("2 -- Even Sharper Claws! +2 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[1], upgradeCost[1]);
        printf("3 -- Water-resistant Fur +4 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[2], upgradeCost[2]);
        printf("4 -- Heat-seeking eyes +8 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[3], upgradeCost[3]);
        printf("5 -- Faster Paws +5%% base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[4], upgradeCost[4]);
        printf("6 -- Tuxedo - 'Dazzle the fish and snag 'em while they're stopped' +12 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[05], upgradeCost[5]);
        printf("7 -- Insect DNA - 'Your compound eyes track the fish even better and faster!' +10%% base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[6], upgradeCost[6]);
        printf("8 -- Premium Whetstone - 'Sharpen your claws with human ingenuity!' +25 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[7], upgradeCost[7]);
        printf("9 -- Fish GMO - 'Make each fish worth slightly more!' +15%% base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[8], upgradeCost[8]);
        printf("10 -- Alien Relic - 'You grew an extra arm!' +25%% base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[9], upgradeCost[9]);
        printf("11 -- Magic Mirror - 'A parallel you came out to help!' x2 base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[10], upgradeCost[10]);
        printf("12 -- Fish. Inc. - 'You now hold a monopoly on the fish market' +1000 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[11], upgradeCost[11]);
        printf("13 -- Intergalactic Terraforming - 'Oncorhynchus-10c can now sustain wild fish populations!' +5000 fish/click (%i) -- Cost: %li fish\n", upgradeLvl[12], upgradeCost[12]);
        printf("14 -- Fishy Wormhole - 'What the fu...' x4 base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[13], upgradeCost[13]);
        printf("15 -- ??? - 'UNKNOWN' +??? base fish/click (%i) -- Cost: %li fish\n", upgradeLvl[14], upgradeCost[14]);
        printf("\n");
        printf("Fish/click: %.2f\n", trueClickVal);
        printf("Fish: %.2f\n", fish);
        string s = get_string("Enter a selection: ");
        if (isspace(s[1]))
        {
            printf("%c8", ASCII_ESC);
            printf("%c[0J", ASCII_ESC);
        }
        else // if (selection < 16 && selection > 0)
        {
            int selection = atoi(s);
            if ((selection == 1 || selection == 2 || selection == 3 || selection == 4 || selection == 6 || selection == 8 || selection == 12 || selection == 13 || selection == 15) && fish >= upgradeCost[selection - 1])
            {
                baseClickVal = baseClickVal + upgradeVal[selection - 1];
                trueClickVal = baseClickVal;
                upgradeLvl[selection - 1] = upgradeLvl[selection - 1] + 1;
                fish = fish - upgradeCost[selection - 1];
                upgradeCost[selection - 1] = upgradeCost[selection - 1] + 0.01 * upgradeCost[selection - 1];
            }
            else if ((selection == 5 || selection == 7 || selection == 9 || selection == 10 || selection == 11 || selection == 14) && fish >= upgradeCost[selection - 1])
            {
                trueClickVal = trueClickVal + (baseClickVal * upgradeVal[selection - 1]);
                upgradeLvl[selection - 1] = upgradeLvl[selection - 1] + 1;
                fish = fish - upgradeCost[selection - 1];
                upgradeCost[selection - 1] = upgradeCost[selection - 1] + (1.5 * upgradeCost[selection - 1]);
            }
            else if (selection == 0)
            {
                gameMode = 1;
                gameMode1(gameMode, fish, trueClickVal, &returnGM, &returnFish);
                gameMode = returnGM;
                fish = returnFish;
            }
        }
    }
}


// game screen for actually clicking to get fish
void gameMode1(int gameMode, float fish, float trueClickVal, int *returnGM, float *returnFish)
{
    // uses VT100 ASCII escape codes in order to keep the terminal clean, makes the game look nice wihout havin to reprint everything every time 'enter' is hit
    printf("%c8", ASCII_ESC);
    printf("%c[0J", ASCII_ESC);
    while (gameMode == 1)
    {
        string input = get_string("");
        if (strcmp(input, "") == 0)
        {
            fish = fish + trueClickVal;
            printf("%c8", ASCII_ESC);
            printf("%c[2K", ASCII_ESC);
            printf("Current fish/click: %.2f\n", trueClickVal);
            printf("Fish: %.2f", fish);
        }
        else if (strcmp(input, "u") == 0)
        {
            gameMode = 2;
        }
        else if (strcmp(input, "e") == 0)
        {
            gameMode = 0;
        }
    }
    // had to use pointers and a temporary sub-function to hold certain values as the values originally sent to this gameplay function could
    // not be edited inside the custom function as it was returning values to a void function.
    // allowed multiple values to be returned to the int main(void)
    *returnGM = gameMode;
    *returnFish = fish;
}