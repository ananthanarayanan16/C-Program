//  WRITE A PROGRAM IN C TO COUNT THE TOTAL NUMBER OF VOWELS OR CONSONANT IN A STRING.

#include <stdio.h>
#include <string.h>

//  FUNCTION DECLARETION

int vowels(char[]);
int consonants(char[]);

//  MAIN FUNCTION

void main()
{
    char str[500];

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    printf("The total number of vowels in the string is : %d\n", vowels(str));
    printf("The total number of consonant in the string is : %d\n", consonants(str));
}

//  VOWELS FUNCTION

int vowels(char str[])
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U') || (str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
        {
            count++;
        }
    }
    return count;
}

//  CONSONANT FUNCTION

int consonants(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if (((str[i] != 'A') && (str[i] != 'E') && (str[i] != 'I') && (str[i] != 'O') && (str[i] != 'U') && (str[i] != 'a') && (str[i] != 'e') && (str[i] != 'i') && (str[i] != 'o') && (str[i] != 'u')) && ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
        {
            count++;
        }
    }
    return count;
}

/*

output:

Input the string : welcome to w3resource.com
The total number of vowels in the string is : 9
The total number of consonant in the string is : 12

*/