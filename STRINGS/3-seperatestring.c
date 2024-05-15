//Write a program in C to seperate indiviual character from a string.

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,count=0;
    printf("Input the string (using scanf() ) : ");
    scanf("%s",&str);
    // for(i=0;str[i]!='\0';i++)
    // {
        // printf("\n%c",str[i]);
    // }
    printf("Input the string (using gets() ) : ");
    // scanf("%s",str);
    // printf("str[0]: %d\n", str[0] );
    gets(str);
    
    printf("Input the string (using fgets() ) : ");
    fgets(str,sizeof(str),stdin);
    printf("The characters of the string are : ");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
    }
}