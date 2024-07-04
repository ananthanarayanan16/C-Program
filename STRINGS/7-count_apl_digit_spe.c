//  WRITE A PROGRAM IN C TO COUNT THE TOTAL NUMBER OF ALPHABETS,DIGITS AND SPECIAL CHARACTERS IS A STRING.

#include<stdio.h>
#include<string.h>

int alphabets(char []);
int digits(char []);
int special_characters(char []);

void main()
{
    char str[100];
    printf("Input the string : ");
    fgets(str,sizeof(str),stdin);
    printf("Number of alphabets in the string is : %d\n",alphabets(str));
    printf("Number of digits in the string is : %d\n",digits(str));
    printf("Number of special characters in the string is : %d\n",special_characters(str));
}


int alphabets(char str[])
{
    int i,count = 0;
    for(i=0;str[i]!='\n';i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        // if((65>=str[i]&&90<=str[i]) || (97>=str[i] && 122<=str[i])) checking wrong 
        {
            count++;
        }
    }
    return count;
}


int digits(char str[])
{
    int i,count = 0;
    for(i = 0; str[i] != '\n' || '\0'; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            count++;
        }
    }
    return count;
}


int special_characters(char str[])
{
    int i,count = 0;
    for(i = 0; str[i] != '\n'; i++)
    {
        if((str[i] >= 32 && str[i] <= 47) || (str[i] >=58 && str[i] <= 64) || (str[i] >= 123 && str[i] <= 123))
        {
            count++;
        }
    }
    return count;
}


/*
output : 

Input the string : welcome to w3resource.com
Number of alphabets in the string is : 21
Number of digits in the string is : 1
Number of special characters in the string is : 3

*/