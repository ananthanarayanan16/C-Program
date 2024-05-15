//Write a program in Cto count the number of vowels and consonants in a string using pointers.

#include<stdio.h>
void count(char *);
void main()
{
    char string[50];
    printf("Input a string : ");
    // gets(string);
    fgets(string,sizeof(string),stdin);
    count(string);
}
void count(char *str)
{
    // char *str=string;
    int i,vowels=0,consonants=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'| |str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='z'))
        {
            consonants++;
        }
    }
    printf("\nNumber of Vowels : %d",vowels);
    printf("\nNumber of Consonants : %d",consonants);
}

/*
output : 1


Input a string : print

Number of Vowels : 1    
Number of Consonants : 4

output : 2
Input a string : w3resource.com

Number of Vowels : 5
Number of Consonants : 7

*/