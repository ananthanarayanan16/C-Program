//write a c program to display the sum of n terms  of even natural numbers.

#include<stdio.h>
int main()
{
    int i,n,even=0,sum=0;
    printf("Input number of terms : ");
    scanf("%d",&n);
    printf("The even numbers are : ");
    i=1;
    while(i<=n)
    {
        even+=2;
        printf("%d ",even);
        sum=sum+even;
        i++;
    }
    printf("\nThe sum of even natural nummber upto %d terms : %d",n,sum);
    return 0;
}
/*
output:
Input number of terms : 5
The even numbers are : 2 4 6 8 10
The sum of even natural nummber upto 5 terms : 30
*/