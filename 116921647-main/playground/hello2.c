// Kenjiro Otake
// 11.23.2022
// Period 8
// Hello Lab 2

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string name = argv[1];
    // print "Hello, World!" to the terminal window
    if (argc >= 2)
    {
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }
    else
    {
        printf("Error: No name entered!\n");
        return 1;
    }
}