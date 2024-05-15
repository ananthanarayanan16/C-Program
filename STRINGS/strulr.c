//string function strupr , strlwr , strrev

#include<stdio.h>
#include<string.h>
void main()
{
    char student[20];
    printf("Enter the name 1 : ");
    scanf("%s",student);
    printf("The uppercase of name is %s \n",strupr(student));
    printf("The lowercase of name is %s\n",strlwr(student));
    printf("The reversed version of name is %s",strrev(student));
}

/*
output : 

Enter the name 1 : string
The uppercase of name is STRING       
The lowercase of name is string       
The reversed version of name is gnirts

*/