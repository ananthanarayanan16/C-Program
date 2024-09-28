//  WIRTE A PROGRAM IN C TO CHECK WHETHER A CHARACTER IN A HEXADECIMAL DIGIT OR NOT.

#include<stdio.h>
#include<string.h>

// FUNCTION DECLARATION

void hexadecimal_digit(char);

void main()
{
    char ch;

    printf("Input a character : ");
    scanf("%c", &ch);
    
    // FUNCTION CALLING

    hexadecimal_digit(ch);
}

// FUNCTION DEFINITION

void hexadecimal_digit(char ch)
{
    if((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F'))
    {
        printf("The entered character is a hexadecimal digit.\n");
    }
    else
    {
        printf("The entered character is not hexadecimal digit.\n");
    }
}


/*

output 1:

Input a character : 3
The entered character is a hexadecimal digit.

output 2:

Input a character : A
The entered character is a hexadecimal digit.

output 3:

Input a character : G
The entered character is not hexadecimal digit.

*/