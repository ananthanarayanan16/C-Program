// write a program in c to check whether a character is a digit or not.

#include<stdio.h>
#include<string.h>

// DEFINING DIGIT() FUNCTION

void digit(char);

// MAIN FUNCTION

void main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    digit(ch);
}

// DEFINITION DIGIT() FUNCTION

void digit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        printf("The entered character is a DIGIT.\n");
    } 
    else
    {
        printf("The entered character is a NOT DIGIT.\n");
    }
}


/*

output 1 : 

Enter a character : 10
The entered character is a DIGIT.

output 2 :

Enter a character : a
The entered character is a NOT DIGIT.

*/