//String sample program

#include<stdio.h>
#include<string.h>
void main()
{
    int i,l;
    char str1[10],str2[10];
    printf("Input a string 1 : ");
    gets(str1);
    printf("Input a string 2 : ");
    fgets(str2,sizeof(str2),stdin);
    printf("\nString 1 length is : %ld\n",strlen(str1));
    printf("\nString 2 length is : %ld\n",strlen(str2));
    // l=sizeof(str2)/sizeof(str2[0]);
    l=strlen(str2);
    printf("\n%d",l);
    for(i=0;i<l;i++)
    {
        if(str2[i]==10)
        {
            printf("\nSuccess...");
        }
    }

}


/*
output: 

Input a string 1 : know
Input a string 2 : know

String 1 length is : 4

String 2 length is : 5


*/