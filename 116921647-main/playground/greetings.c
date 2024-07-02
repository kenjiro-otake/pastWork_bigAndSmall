// Kenjiro Otake
// 10.29.2022
// Period 8
// 0.1 Greetings Lab

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = "West";
    int age = 18;
    float stairTime = 120.12;
    // print a greeting to the terminal window
    printf("Greetings, %s!\n", name);
    printf("I think you are %i years old!\n", age);
    printf("It takes me around %.2f seconds to climb up the stairs to class :(\n", stairTime);
}