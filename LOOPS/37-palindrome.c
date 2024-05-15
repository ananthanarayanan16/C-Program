//Write a c program to check whether a number is a palindrome or not.

#include<stdio.h>
int main()
{
    int n,m,k,sum=0;
    printf("Input a number : ");
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        m=n%10;
        sum=sum*10+m;
        n=n/10;
    }
    if(sum==k)
    {
        printf("%d is a palindrome number.",k);
    }
    else
    {
        printf("%d is not palindrome number.",k);
    }
    return 0;
}
/*
otuput:
Input a number : 12321
12321 is a palindrome number.
*/