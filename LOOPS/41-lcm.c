//Write a c program to find the LCM of two numbers.

#include<stdio.h>
int main()
{
    int num1,num2,n,p,q,result=1;
    printf("Input 1st number for LCM : ");
    scanf("%d",&num1);
    printf("Input 2nd number for LCM : ");
    scanf("%d",&num2);
    n=2;
    p=num1,q=num2;
    while((num1>1)||(num2>1))
    {
        if((num1%n==0)||(num2%n==0))
        {
            result=result*n;
            if(num1%n==0)
            {
                num1=num1/n;
            }
            if(num2%n==0)
            {
                num2=num2/n;
            }
        }
        else
        {
            n++;
        }
    }
    printf("The LCM of %d and %d is : %d",p,q,result);
    return 0;
}
/*
output:
Input 1st number for LCM : 36
Input 2nd number for LCM : 24
The LCM of 36 and 24 is : 72
*/