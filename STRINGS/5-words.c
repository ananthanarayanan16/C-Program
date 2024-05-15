//Wtire a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
int words(char []);
void main()
{
    char str[100];
    printf("Input the string (using fgets() ) : ");
    fgets(str,sizeof(str),stdin);
    printf("Total number of words in the string is : %d",words(str));
}
int words(char str[])
{
    int i=0,count=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
    }
    return count;
}


/*
output : 1

Input the string (using fgets() ) : This is w3resource.com
Total number of words in the string is : 3

output : 2

Input the string (using fgets() ) : The given string is Hello world   
Total number of words in the string is : 6

*/