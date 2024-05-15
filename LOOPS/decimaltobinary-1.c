//Write a program in c to convert a decimal number into binary without using an array.

#include<stdio.h>
int main()
{
    long long int dec,m,sum=0,binary=0;
    printf("Input a deciaml number : ");
    scanf("%lld",&dec);
    while(dec>0)
    {
        m=dec%2;
        sum=sum*10+m;
        dec=dec/2;
    }   
    while(sum>0)
    {
        m=sum%10;
        binary=binary*10+m;
        sum=sum/10;
    }
    printf("Binary number equivalent to said decimal number is : %lld",binary);
    return 0;
}
/*
output: 1
Input a deciaml number : 25
Binary number equivalent to said decimal number is : 11001

output : 2

Input a deciaml number : 2024
Binary number equivalent to said decimal number is : 11111101
*/
















