// Kenjiro Otake
// 12.15.2022
// Period 8
// vigenere lab

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int key_check(string k);
int key_make(char k);
char encrypt(char p, int k);

int main(int argc, string argv[])
{
   if (argc == 2)
   {
       int keyCheck = key_check(argv[1]);

       if (keyCheck == 0)
       {
           int l = strlen(argv[1]);
           int k[l];
           for (int i = 0; i < l; i++)
           {
               k[i] = key_make(argv[1][i]);
           }

           string p = get_string("plaintext: ");

           printf("ciphertext: ");
           for (int i = 0, j = 0; i < strlen(p); i++)
           {
               char c = encrypt(p[i], k[j]);

               if (isalpha(p[i]))
               {
                   if (j == l - 1)
                   {
                       j = 0;
                   }
                   else if (j < l - 1)
                   {
                       j++;
                   }
               }
               printf("%c", c);
           }
           printf("\n");
       }
       else
       {
           printf("Usage: ./vigenere key \n");
           return 1;
       }
   }
   else
   {
       printf("Usage: ./vigenere key \n");
       return 1;
   }
}

// check if key is all alphabet
int key_check(string k)
{
   int keyCheck = 0;
   for (int i = 0; i < strlen(k); i++)
   {
       if (isalpha(k[i]))
       {
           keyCheck = keyCheck + 0;
       }
       else
       {
           keyCheck = keyCheck + 1;
       }
   }
   return keyCheck;
}

// make an int array for each letter of the key
int key_make(char k)
{
   int key = '\0';
   if (isupper(k))
   {
       key = k - 65;
   }
   else if (islower(k))
   {
       key = k - 97;
   }
   return key;
}

// take plainText and key array to produce ciphertext
char encrypt(char p, int k)
{
   char c = p;
   if (isalpha(p))
   {
       if (isupper(p))
       {
           int a = (int)p;
           a = 65 + ((a - 65) + k) % 26;
           c = (char)a;
       }
       else if (islower(p))
       {
           int a = (int)p;
           a = 97 + ((a - 97) + k) % 26;
           c = (char)a;
       }
   }
   else
   {
       c = p;
   }
   return c;
}