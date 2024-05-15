//Write a c program to find strong number within a range of numbers.

#include<stdio.h>
int main()
{
    int start,end,fact,sum,x,y,i,j;
    printf("Input starting range of number : ");
    scanf("%d",&start);
    printf("Input ending range of number : ");
    scanf("%d",&end);
    printf("The strong number are : ");
    for(i=start;i<=end;i++)
    {
        y=i;
        sum=0;
        while(y>0)
        {
            fact=1;
            x=y%10;
            for(j=1;j<=x;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            y=y/10;
        }
        if(sum==i)
        {
            printf("%d ",sum);
        }
    }
    return 0;
}
/*
output:
Input starting range of number : 1
Input ending range of number : 300
The strong number are : 1 2 145
*/