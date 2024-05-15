//Write a C program to calculate the factorial of a given number.

#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Input the number : ");
    scanf("%d",&num);
    i=1;
    do
    {
        fact=fact*i;
        i++;
    }while(i<=num);
    printf("Factorial of %d is : %d",num,fact);
    return 0;
}
/*
output:
Input the number : 5
Factorial of 5 is : 120
*/