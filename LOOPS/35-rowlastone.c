//Write a c program to display such a pattern for  n rows using a number that start with 1 and each row wil have a 1 as the first and last number.

#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Input the number of rows : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/*
output 1 :
Input the number of rows : 5
     1    
    121   
   12321  
  1234321 
 123454321
 
 
 
 output 2: 
 

Input the number of rows : 10
          1  
         121 
        12321
       1234321
      123454321
     12345654321
    1234567654321
   123456787654321
  12345678987654321
 12345678910987654321
 
 */