//Write a program in Cto print a string in reverse using pointers.

#include<stdio.h>
int main()
{
    char string[100],*ptr;
    int len=0,i=0;
    printf("Input a string : ");
    gets(string);
    while(string[i]!=0)
    {
        len++;
        i++;
    }
    ptr=&string[len-1];
    printf("The reverse string is : \n");
    for(i=0;i<len;i++)
    {
        printf("%c",*ptr);
        ptr--;
    }
    return 0;
}

/*
output : 

Input a string : w3resource
The reverse string is : 
ecruoser3w
PS F:\C-Pr

Input a string : Anantha Narayanan
The reverse string is : 
nanayaraN ahtnanA 

*/