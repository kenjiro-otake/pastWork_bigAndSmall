// Kenjiro Otake
// 12.8.2022
// Period 8
// caesar lab

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char key_check(string k);
string encrypt(string p, int k);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        char keyCheck = key_check(argv[1]);

        if (keyCheck == 'T')
        {
            int k = atoi(argv[1]);

            string p = get_string("plaintext: ");

            string c = encrypt(p, k);

            printf("ciphertext: %s\n", c);

            return 0;
        }
        else
        {
            printf("Usage: ./caesar key \n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
}


char key_check(string k)
{
    char keyCheck = 'F';
    for (int i = 0; i < strlen(k); i++)
    {
        if (isdigit(k[i]) && atoi(k) > -1)
        {
            keyCheck = 'T';
        }
        else
        {
            keyCheck = 'F';
        }
    }
    return keyCheck;
}


string encrypt(string p, int k)
{
    string c = p;

    for (int i = 0; i < strlen(p); i++)
    {
        if (isalpha(p[i]))
        {
            if (isupper(p[i]))
            {
                int a = (int)p[i];
                a = 65 + ((a - 65) + k) % 26;
                c[i] = (char)a;
            }
            else if (islower(p[i]))
            {
                int a = (int)p[i];
                a = 97 + ((a - 97) + k) % 26;
                c[i] = (char)a;
            }
        }
        else
        {
            c[i] = p[i];
        }
    }
    return c;
}