// WRITE A PROGRAM IN C TO CHECK WHETHER A LETTER IS UPPERCASE OR NOT

#include<stdio.h>
#include<string.h>

// FUNCTION DECLARETION 

void uppercase(char);

// MAIN FUNCTION

int main()
{
    char ch;

    printf("Input a character : ");
    scanf("%c", &ch);

    // FUNCTION CALLING

    uppercase(ch);

    return 0;
}

// FUNCTION DEFINITION

void uppercase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The entered letter is a UPPERCASE letter.\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("The entered letter is not a UPPERCASE letter.\n");
    }
    else
    {
        printf("The given character is not a ALPHABET.\n");
    }
}


/*

output 1:

Input a character : 3
The given character is not a ALPHABET.

output 2:

Input a character : w
The entered letter is not a UPPERCASE letter.

output 3:

Input a character : R
The entered letter is a UPPERCASE letter.

*/