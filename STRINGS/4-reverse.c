//Write a program in C to print individual character of a string in reverse order.

#include<stdio.h>
#include<string.h>
int length(char []);
void main()
{
    char str[100];
    int l,i;
    printf("Input the string (using scanf() ) : ");
    fgets(str,sizeof(str),stdin);
    l=length(str);
    printf("The character of the string is reverse are : \n");
    for(i=l-1;i>=0;i--)
    {
        printf("%c ",str[i]);
    }
}
int length(char str[])
{
    int i=0,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

/*
output:

Input the string (using scanf() ) : strings
The character of the string is reverse are : 

 s g n i r t s

 */