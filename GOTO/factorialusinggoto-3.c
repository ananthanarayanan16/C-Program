//Write a c program to find the factorial of a given number without using loop and with using goto statement .

#include<stdio.h>
int main()
{
    int num,fact=1,i=1;
    printf("Enter the number to find factorial : ");
    scanf("%d",&num);
    go:
    fact=fact*i;
    i++;
    if(i<=num)
    {
        goto go;
    }
    printf("Factorial of %d is : %d",num,fact);
    return 0;
}
/*
output:
Enter the number to find factorial : 5
Factorial of 5 is : 120
*/