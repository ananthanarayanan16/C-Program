// WRITE A STRING PROGRAM IN C.

#include<stdio.h>
#include<string.h>

void main()
{
    char string[1000];
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);

    puts(string);
}