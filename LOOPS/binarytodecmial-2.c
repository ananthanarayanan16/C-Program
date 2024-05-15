//Write a c program to convert a binary number into a decimal number without using array , function and while loop.

#include<stdio.h>
int main()
{
    int i,j,x,y,bin,dec=0,squa=0;
    printf("Input the binary number : ");
    scanf("%d",&bin);
    for(i=bin;i>0;i=i/10)
    {
        y=1;
        x=i%10;
        for(j=1;j<=squa;j++)
        {
            y=y*2;
        }
        dec=dec+x*y;
        squa++;
    }
    printf("The binary number is : %d\n",bin);
    printf("The equivalent decimal number is : %d",dec);
    return 0;
}
/*
output:
Input the binary number : 101101
The binary number is : 101101
The equivalent decimal number is : 45
*/