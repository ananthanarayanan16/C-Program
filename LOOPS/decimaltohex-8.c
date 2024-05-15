//Write a c program to convert a decimal number to hexadecimal.

#include<stdio.h>
int main()
{
    int i,n,hex,decimal,reaminder,base=16,sum=0;
    printf("Input any decimal number : ");
    scanf("%d",&decimal);
    for(i=decimal;i>0;i/=base)
    {
        reaminder=i%base;
        if(reaminder>=10)
        {   
            n=reaminder+55;
            sum=sum*100+n;
        }
        else
        {
            n=reaminder+48;
            sum=sum*100+n;
        }
    }
    printf("The equivalent hexadecimal number is : ");
    for(i=sum;i>0;i/=100)
    {
        hex=i%100;
        printf("%c",hex);
    }
    return 0;
}
/*
output:
Input any decimal number : 78
The equivalent hexadecimal number is : 4E
*/