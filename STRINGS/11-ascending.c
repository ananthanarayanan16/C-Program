//Write a C program to sort a string array in ascending order.

#include "stdio.h"
#include <string.h>
void asce(char []);
void main()
{
    char str[100];
    printf("Input a string : ");
    fgets(str,sizeof(str),stdin);
    // scanf("%d",&str);
    asce(str);

}
void asce(char str[])
{
    int i,j,count=0,swap;
    for(i=0;str[i]!='\n';i++)
    {
        for(j=i+1;str[j]!='\n';j++)
        {
            if(str[i]>=str[j])
            {
                swap=str[j];
                str[j]=str[i];
                str[i]=swap;
            }
        }        
    }
    printf("\n%s",str);
}