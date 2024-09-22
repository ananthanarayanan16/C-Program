//WRITE A PROGRAM IN C TO REMOVE CHARACTERS FROM A STRING EXCEPT ALPHABETS

#include<stdio.h>
#include<string.h>

// FUNCTION DECLERATION

int remove(char []);

//  MAIN FUNCTION

void main()
{
    char string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);

    remove(string);
}

// REMOVE FUNCTION DEFINITION

int remove(char string[])
{
    int i,j;
    for(i = 0; string[i] != '\0'; i++)
    {
        if((string[i] < 65 && string[i] > 90) || (string[i] < 96 && string[i] > 122))
        {
            for(j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j + 1];
            }
            string[j] = '\0';
        }
    }   

    printf("After removing characters except alphabets : %s", string);
}