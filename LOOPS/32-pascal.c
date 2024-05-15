//Write a C program to display pascal's triangle.

#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num,row,column,n,r,p,k;
    printf("Input number of rows : ");
    scanf("%d",&num);
    for(row=0;row<num;++row)
    {
        for(column=row;column<num;++column)
        {
            printf(" ");
        }
        for(column=0;column<=row;++column)
        {
            n=factorial(row);
            r=factorial(column);
            p=factorial(row-column);
            k=n/(p*r);
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}


/*

output : 

Input number of rows : 5
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
 
 */