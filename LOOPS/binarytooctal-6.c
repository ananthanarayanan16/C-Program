//write a c program to convert a binary number to octal.

#include<stdio.h>
int main()
{
    long long int i,j,k,n,m=1,start,binary,octal=0,power=0,base=2,sum1=0,sum2=0;
    printf("Input a binary number : ");
    scanf("%lld",&binary);
    for(i=binary;i>0;i=i/1000)
    {
        start=i%1000;
        power=0;
        sum1=0;
        for(j=start;j>0;j=j/10)
        {
            m=1;
            n=j%10;
            for(k=0;k<power;k++)
            {
                m=m*base;
            }
            sum1=sum1+n*m;
            power++;
        }
        sum2=sum2*10+sum1;
    }
    for(i=sum2;i>0;i=i/10)
    {
        n=i%10;
        octal=octal*10+n;
    }
    printf("The equivalent octal number is : %lld",octal);
    return 0;
}

/*
output
Input a binary number : 001110101
The equivalent octal number is : 165 
*/