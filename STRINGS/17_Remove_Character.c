//  WRITE A PROGRAM IN C TO REMOVE CHARACTERS FROM A STRING EXCEPT ALPHABETS.

#include<stdio.h>
#include<string.h>

char remove(char []);

void main()
{
    char string[100];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("After removing the output string : %s", remove(string));
}