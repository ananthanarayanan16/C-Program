//Write a program in C to find the length of a string without using library function.

#include<stdio.h>
#include<string.h>
int length(char []);
void main()
{
    char str[100];
    printf("Input the string (using scanf() ) : ");
    scanf("%s",&str);
    printf("Input the string (using gets() ) : ");
    gets(str);
    printf("Input the string (using fgets() ) : ");
    fgets(str,sizeof(str),stdin);
    printf("Length of the string is : %d",length(str));
}
int length(char str[])
{
    int i=0,count=0;
    while(str[i]!=0)
    {
        count++;
        i++;
    }
    return count;
}