//Write a c program to convert an octal number to a decimal without using an array.

#include<stdio.h>
int main()
{
    int i,j,n,octal,decimal=0,power=0,base=8,m=1;
    printf("Input an octal number (Using digits 0-7 ) : ");
    scanf("%d",&octal);
    for(i=octal;i>0;i=i/10)
    {
        n=i%10;
        for(j=0;j<=power;j++)
        {
            m=m*base;
        }
        decimal=decmial+m;
    }
    printf("%d",decimal);
    return 0;
}