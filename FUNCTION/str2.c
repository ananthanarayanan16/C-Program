//string

#include<stdio.h>
#include<string.h>
void main()
{
    char str1[10],str2[10];
    printf("Input a string : ");
    gets(str1);
    printf("Input a string : ");
    fgets(str2,sizeof(str2),stdin);  
    printf("\nString 1 lenght is : %d",strlen(str1));
    printf("\nString 2 length is : %d",strlen(str2));
    
}