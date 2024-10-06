// WRITE A PROGRAM IN C TO FIND THE COUNT OF THE STRIN

#include<stdio.h>
#include<string.h>


void main()
{
    char string[200];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);

    printf("\nThe given string is : %s", string);
}