//Write a c program to find the LCM of any two number using HCF.

#include<stdio.h>
int main()
{
    int i,n,num1,num2,result1,result2;
    printf("Input 1st number for LCM : ");
    scanf("%d",&num1);
    printf("Input 2nd number for LCM : ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        n=num2;
    }
    else
    {
        n=num1;
    }
    for(i=1;i<=n;i++)
    {
        if(((num1%i)||(num2%i))==0)
        {
            result1=i;
        }
    }
    result2=num1*num2/result1;
    printf("The LCM of %d and %d is : %d ",num1,num2,result2);
    return 0;
}
/*
output:
Input 1st number for LCM : 15
Input 2nd number for LCM : 20
The LCM of 15 and 20 is : 60 
*/