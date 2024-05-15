//Write a c program to convert a binary number into a deciaml number using the math function.

#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,bin,dec=0,power=0,base=2;
    printf("Input the binary number : ");
    scanf("%d",&bin);
    for(i=bin;i>0;i=i/10)
    {
        x=i%10;
        y=pow(base,power);
        dec=dec+x*y;
        power++;
    }
    printf("The binary number : %d\n",bin);
    printf("The equivalent decimal number is : %d",dec);
    return 0;
}
/*
output:
Input the binary number : 1010001
The binary number : 1010001
The equivalent decimal number is : 81
*/