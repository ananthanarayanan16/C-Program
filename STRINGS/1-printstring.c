//Write a program in C to input a string and print it.

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];

    printf("Input the string (using fgets() ) : ");
    fgets(str,sizeof(str),stdin);
    printf("The string you entered is : %s\n",str);

    printf("Input the string (using gets() ) : ");
    gets(str);
    printf("The string you entered is : %s\n",str);

    printf("Input the string (using scanf() ) : ");
    scanf("%s",&str);
    printf("The string you entered is : %s\n",str);       
}