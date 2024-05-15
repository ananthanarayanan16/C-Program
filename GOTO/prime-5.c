//Write a c program to check whether given number is prime number or not using goto.

#include<stdio.h>
int main()
{
    int num,i=1,t=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    go:
    if(num%i == 0)
    {
        t++;
    }
    i++;
    if(i<=num)
    {
        goto go;
    }
    if(t==2)
    {
        printf("The given %d is prime number .",num);
    }
    else
    {
        printf("The given %d is not prime number .",num);
    }
    return 0;
}
/*
output:
Enter a number : 5
The given 5 is prime number .
*/