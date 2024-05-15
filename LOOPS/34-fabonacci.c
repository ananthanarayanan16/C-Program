//Write a progrma in c to display the first n term of the fibonacci series.

#include<stdio.h>
int main()
{
    int i,num,a,b,c;
    printf("Input number terms to display : ");
    scanf("%d",&num);
    printf("Here is the fabonacci series upto %d terms : ",num);
    a=0,b=1;
    printf("%d %d",a,b);
    for(i=1;i<=num-2;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    return 0;
}
/*
output:
Input number terms to display : 8
Here is the fabonacci series upto 8 terms : 0 1 1 2 3 5 8 13
*/