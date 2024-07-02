// Kenjiro Otake
// 10.31.2022
// Period 8
// User Input Lab

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name;
    char fInitial;
    char lInitial;
    int year;
    int age;
    float gpa;
    char math;
    float numbers[3];
    int numbersLength = sizeof numbers / sizeof *numbers;
    char operation = '\0';
    float finalNum = 0;

    // ask for a name
    printf("\n");
    name = get_string("Hello! Please enter your name: ");
    fInitial = get_char("What is your first initial? ");
    lInitial = get_char("What is your last initial? ");
    year = get_int("What year were you born in? ");
    age = get_int("How old are you? ");
    gpa = get_float("What is your GPA (You can lie if you want)? ");
    math = get_char("Do you want to do some math? Type 'y' for yes, 'n' for no: ");

    if (math == 'y')
    {
        operation = get_char("If you want to sum, type '+'. If you want the product, type 'x': ");
        if (operation == '+')
        {
            printf("You will be able to add 3 numbers\n");
            for (int i = 0; i < numbersLength; i++)
            {
                numbers[i] = get_float("Enter a number: ");
                finalNum = finalNum + numbers[i];
            }
        }
        else if (operation == 'x')
        {
            finalNum = 1;
            printf("You will be multiply 3 numbers\n");
            for (int i = 0; i < numbersLength; i++)
            {
                numbers[i] = get_float("Enter a number: ");
                finalNum = finalNum * numbers[i];
            }
        }
    }
    else if (math == 'n')
    {
        printf("Ok, no worries!\n");
        operation = 'n';
    }
    else
    {
        math = get_char("Please type 'y' for yes or 'n' for no: ");
    }

    // final response
    printf("\n");
    printf("Greetings, %s!\n", name);
    printf("Your initial are %c.%c.\n", fInitial, lInitial);
    printf("You were born in %i, and currently %i years old.\n", year, age);
    printf("Your current GPA is: %.2f -- Good job!\n", gpa);
    if (operation == 'n')
    {
    printf("You chose not to do any math :(\n");
    }
    else if (operation == '+')
    {
    printf("You chose to add the numbers %.3f, %.3f, and %.3f.\n", numbers[0], numbers[1], numbers[2]);
    printf("The sum is %.3f.\n", finalNum);
    }
    else if (operation == 'x')
    {        printf("You chose to multiply the numbers %.3f, %.3f, and %.3f.\n", numbers[0], numbers[1], numbers[2]);
        printf("The product is %f.\n", finalNum);
    }
    printf("Goodbye!\n");
    printf("\n");
}