// Kenjiro Otake
// 11.30.2022
// Period 8
// adder-1

#include <stdio.h>
#include <cs50.h>

int add_ints(int a, int b);

int main(void)
{
    int x = get_int("First integer: \n");
    int y = get_int("Second integer: \n");

    int z = add_ints(x, y);

    printf("The sum of %i and %i is %i! :) \n", x, y, z);
}

int add_ints(int a, int b)
{
    int sum = a + b;
    return sum; 
}