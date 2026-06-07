#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //1. Get a string from the user using get_string
    string name = get_string("What is your name? ");

    //2 & 3. print and format the string using printf and %s
    printf("hello, %s\n", name);
}
