// WRITE A PROGRAM IN C TO REMOVE CHARACTER FROM A STRING EXCEPT ALPHABETS

#include<stdio.h>
#include<string.h>

void remove(char []);

void main()
{
    char string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    remove(string);
}

void remove(char string[])
{
    int i, j;

    for(i = 0; string[i] != '\0'; i++)
    {
        if((string[i] < 65 && string[i] >90) || (string[i] < 'a' && string[i] > 'z'))
        {
            for(j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j+1];
            }
            string[j] = '\0';
        }
    }
    printf("After removing the output string : %s", string);
}