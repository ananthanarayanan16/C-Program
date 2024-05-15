//Write a c program to check whether a given  number is an armstrong number or not.

#include<stdio.h>
int main()
{
    int n,m,i,x,sum=0;
    printf("Input a number : ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        i=n%10;
        x=i*i*i;
        sum=sum+x;
        n=n/10;
    }
    if(sum==m)
    {
        printf("%d is an Armstrong number.",m);
    }
    else
    {
        printf("%d is an not Armstrong number.",m);
    }
    return 0;
}
/*
output:
Input a number : 153
153 is an Armstrong number.

output 2:

Input a number : 500
500 is an not Armstrong number.

*/