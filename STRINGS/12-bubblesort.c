//Write a program in c to read a string from the keyboard and sort it using bubble sort.

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,num,j;
    printf("Input number of string : ");
    scanf("%d",&num);
    char string[num][100],swap[100];
    printf("Input string %d :\n",num);
    // scanf("%d",&j);
    // printf("%c --- \n",j);
    for(i=0;i<num;i++)
    {
        scanf("%s",&string[i]);
        // fgets(string[i], sizeof(string[i]), stdin);
        // gets(string[i]);
    }
    printf("The string appears after sorting : \n");
    n=num;
    start:
    for(i=0;i<n;i++)
    {
        if(strcmp(string[i], string[i+1])>0)
        {
            strcpy(swap,string[i]);
            strcpy(string[i],string[i+1]);
            strcpy(string[i+1],swap);
        }
        if(i==n-1)
        {
            n--;
            goto start;
        }
    }
    for(i=0;i<num;i++)
    {
        printf("%s\n",string[i]);
    }
    return 0;
}

/*
output : 

Input number of string : 3
Input string 3 :
zero
one
two
The string appears after sorting : 
one 
two 
zero

output :

Input number of string : 3
Input string 3 :
srinivash
venkatesh
ananth 
The string appears after sorting : 
ananth
srinivash
venkatesh

*/