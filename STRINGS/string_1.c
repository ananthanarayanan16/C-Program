// write a c program in c to find a string

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
}