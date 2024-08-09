//  WRITE A PROGRAM IN C TO READ A SENTANCE AND REPLACE LOWERCASE CHARACTERS WITH UPPERCASE AND VICE VERSA.

#include<stdio.h>
#include<string.h>

//  FUNCTION DECLERATION

char character_replace(char []);   

//  MAIN FUNCTION

int main()
{
    char string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("\nThe given string is : %s\n", string);
    // printf("\nAfter case changed the string is : %s", character_replace(string));
    character_replace(string);
}

//  DEFINE CHARACTER_REPLACE FUNCTION

char character_replace(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 90 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("After case changed the string is : %s", str);
    return 0;
}


/*
output 1 :

Input the string : This Is A Test String

The given string is : This Is A Test String

After case changed the string is : tHIS iS a tEST sTRING

output 2 : 

Input the string : anantha NARAYANAN

The given string is : anantha NARAYANAN

After case changed the string is : ANANTHA narayanan

*/