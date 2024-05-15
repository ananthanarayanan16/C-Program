//Write a program in c to print all permutation of a given string using pointer.

#include<stdio.h>
#include<string.h>
void swap(char *,char*);
int Length(char []);
void main()
{
    char string[]="abcde",str[50];
    int length,count=0,i;
    printf("The original string is  : %s",string);
    length=Length(string);
    // printf("   %d  ",length);
    for(i=0;i<length;i++)
    {
        str[i]=string[i];
    }
    str[length]='\0';
    printf("\nThe permutation are : \n");
    start:
    count++;
    printf("%s ",string);
    for(int i=1;i<=6;i++)
    {
        if(i%2!=0)
        {
            swap(&string[length-2],&string[length-1]);
            printf("%s ",string);
        }
        else
        {
            swap(&string[length-3],&string[length-1]);
            printf("%s ",string);
        }
    }
    if(count<4)
    {
        swap(&str[0],&str[count]);
        // string=str;
        // printf("\n***  %s ****   %s ****",str,string);
        for(int i=0;i<length;i++)
        {
            string[i]=str[i];
        }
        string[length]='\0';
        goto start;
    }
}
void swap(char *a,char *b)
{
    char swap;
    swap=*a;
    *a=*b;
    *b=swap;
}
int Length(char str[])
{
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    return l;
}