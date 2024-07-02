// Kenjiro Otake
// 11.2.2022
// Period 8
// typecast Practice

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
   int operandA = atoi(argv[1]);
   int operandB = atoi(argv[2]);
   float answer = (float)operandA/operandB;

   printf("%f\n", answer);
}