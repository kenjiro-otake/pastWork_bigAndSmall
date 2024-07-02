// Kenjiro Otake
// 11.30.2022
// Period 8
// functionPractice

#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float a, float b, float c);

int main(void)
{
    float a = get_float("Enter one side of the triangle: \n");
    float b = get_float("Enter the second side of the triangle: \n");
    float c = get_float("Enter the third side of the triangle: \n");

    if (valid_triangle(a, b, c))
    {
        printf("This is a valid triangle! :) \n");
    }
    else
    {
        printf("This triangle is invalid! :( \n");
    }
}

bool valid_triangle(float a, float b, float c)
{
    float ab = a + b;
    float bc = b + c;
    float ac = a + c;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    if (ab > c && bc > a && ac > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}