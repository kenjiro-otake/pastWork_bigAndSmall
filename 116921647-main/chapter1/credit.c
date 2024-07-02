// Kenjiro Otake
// 11.17.2022
// Period 8
// Credit Card Lab

// imports required functions
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long cardNum;

    cardNum = get_long("Enter credit card number: ");

    if (cardNum < 4000000000000 || cardNum > 5599999999999999)
    {
        printf("INVALID\n");
    }
    else
    {
        // create array length for each digit of the card number
        // log10(123) = 2.####..., log10(12) = 1.###..., log10(128376) = 5.###... >> aLength = (log10(#####) + 1) [??]
        int aLength = (log10(cardNum) + 1);
        int x[aLength];
        int xa[aLength];
        int split[32];

        // 5555555555554444
        // take each digit of the card number
        for (int i = aLength - 1; i >= 0; i--)
        {
            x[i] = cardNum % 10;
            xa[i] = x[i];
            cardNum = cardNum / 10;
        }

        for (int i = aLength - 2; i >= 0; i -= 2)
        {
            x[i] = x[i] * 2;
        }

        for (int i = 0, s = 0; i < aLength; i++, s += 2)
        {
            if (x[i] > 9)
            {
                split[s] = x[i] % 10;
                x[i] = x[i] / 10;
                split[s + 1] = x[i] % 10;
            }
            else
            {
                split[s] = x[i];
            }
        }

        int sum = 0;
        for (int i = 0; i < 32; i++)
        {
            sum = sum + split[i];
        }
        int sumCheck = sum % 10;

        char result = 'n';
        if (sumCheck == 0)
        {
            if (xa[0] == 4 && (aLength == 13 || aLength == 16))
            {
                result = 'v';
            }
            if (xa[0] == 5 && xa[1] >= 1 && xa[1] <= 5 && aLength == 16)
            {
                result = 'm';
            }
            if (xa[0] == 3 && (xa[1] == 4 || xa[1] == 7) && aLength == 15)
            {
                result = 'a';
            }
        }

        if (result == 'n')
        {
            printf("INVALID\n");
        }
        else if (result == 'v')
        {
            printf("VISA\n");
        }
        else if (result == 'm')
        {
            printf("MASTERCARD\n");
        }
        else if (result == 'a')
        {
            printf("AMEX\n");
        }
    }
}