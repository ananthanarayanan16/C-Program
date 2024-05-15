//Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>
int copy_string(char [],char []);
void main()
{
    char str1[100],str2[100];
    int count;
    printf("Input the string : ");
    fgets(str1,sizeof(str1),stdin);
    printf("The first string is : %s",str1);
    copy_string(str1,str2);
}
int copy_string(char str1[],char str2[])
{
    int i,count=0,number=0;
    for(i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;i<=count;i++)
    {
        str2[i]=str1[i];
    }
    printf("The second string is : %s",str2);
    printf("Number of character copied : %d",count);
    // for(i=0;str2[i]!='\0';i++)
    // {
        // number++;
    // }
    // printf("  \n  %d",number);
    return 0;
}


/*

output : 

Input the string : This is a string to be copied.
The first string is : This is a string to be copied. 
The second string is : This is a string to be copied.
Number of character copied : 31

*/
