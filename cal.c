#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //ask the users for two numbers   
    float num1 = get_float("first number : ");
    float num2 = get_float("second number : ");
    
    //rules
    printf("\nwhat do you want to do? (a to + || d to / || s to - || m to * )\n");
    string n = get_string("\nchoose only (a or s or d or m) : ");

    //addtion
    if (strcmp(n, "a") == 0)
    {
        float add = num1 + num2;
        printf("\nthe answer :%.3f \n", add);
    }
    
    //subtraction
    if (strcmp(n, "s") == 0)
    {
        float sub = num1 - num2;
        printf("\nthe answer : %0.3f\n", sub);
    }
    
    //multiply
    if (strcmp(n, "m") == 0)
    {
        float mult = num1 * num2;
        printf("\nthe answer : %0.3f\n", mult);
    }
    
    //division
    if (strcmp(n, "d") == 0)
    {
        float divi = num1 / num2;
        printf("\nthe answer : %0.3f\n", divi);
    }
    
    //otherwise , do nothing and make a caution to use only the specific letters
    else
    {
        printf("\nif it doesn't work, make sure to use only the letters (m-s-d-a)\ngo ahead and rerun the program :)\n");
    }

}