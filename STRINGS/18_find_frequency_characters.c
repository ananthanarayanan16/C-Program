// WRITE A C PROGRAM IN C TO FIND THE FREQUENCY OF CHARACTERS.

#include<stdio.h>
#include<string.h>

int frequency(char [], char);  // FREQUENCY FUNCTION DECELERATION

// MAIN FUNCTION

void main()
{
    char string[100], frequency_character;

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the character of find frequency : ");
    scanf("%c", &frequency_character);

    // FUNCTION CALLIING IN THE BELOW LINE

    printf("The frequency of '%c' is %d.\n", frequency_character, frequency(string, frequency_character));
}

// FUNCTION DEFINITION

int frequency(char string[], char ch)
{
    int i, frequency = 0;

    for(i = 0; string[i] != '\0'; i++)
    {
        if(ch == string[i])
        {
            frequency++;
        }
    }

    return frequency;
}

/*
Output:

Input the string : This is a test string.
Input the character of find frequency : i
The frequency of 'i' is 3.

*/