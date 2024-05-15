//write a program in c to convert a decimal number into octal number without using an array.

#include<stdio.h>
int main()
{
    int i,n,m,dec,octal=0,sum=0,base=8,x;
    printf("Enter a number to convert : ");
    scanf("%d",&dec);
    n=dec;
    while(n>0)
    {
        m=n%base;
        sum=sum*10+m;
        n=n/base;
    }
    for(i=sum;i>0;i=i/10)
    {
        m=i%10;
        octal=octal*10+m;
    }
    printf("The octal number of %d is : %d",dec,octal);
    return 0;
}
/*
output:
Enter a number to convert : 186
The octal number of 186 is : 272
*/