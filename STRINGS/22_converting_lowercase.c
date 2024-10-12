//  WRITE A PROGRAM IN C TO CONVERT A STRING TO LOWER CASE

#include<stdio.h>
#include<string.h>

// FUNCTION DECELERATION

void lowercase(char []);

// MAIN FUNCTION

void main()
{
    char str[100];

    printf("Input a string in uppercase : ");
    fgets(str, sizeof(str), stdin);

    printf("Here the above string in lowercase : \n");   

    // FUNCTION CALLING

    lowercase(str);   
}

// FUNCTION DEFINITION

void lowercase(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("%s", str);
}


/*

output 1: 

Input a string in uppercase : ANANTHA NARAYANAN
Here the above string in lowercase : 
anantha narayanan

output 2:

Input a string in uppercase : AnAnThA nArAyAnAn
Here the above string in lowercase : 
anantha narayanan

*/