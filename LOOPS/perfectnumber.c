//Write a c program to check whether a given number is a 'perfect' number or not.

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Input the number : ");
    scanf("%d",&n);
    printf("The positive divisor : ");
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum of the divisor is :  %d",sum);
    if(sum==n)
    {
        printf("\nSo,the number is perfect.");
    }
    else
    {
        printf("\nSo,the number is not perfect.");
    }
    return 0;
}
/*
output:
Input the number : 28
The positive divisor : 1 2 4 7 14 
The sum of the divisor is :  28
So,the number is perfect.

output 2: 

Input the number : 30
The positive divisor : 1 2 3 5 6 10 15 
The sum of the divisor is :  42        
So,the number is not perfect.
*/