//Write a C program that displays the n terms of square natural numbers and their sum.

#include<stdio.h>
int main()
{
    int i,n,squa,sum=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    printf("The square natural upto %d terms are : ",n);
    for(i=1;i<=n;i++)
    {
        squa=i*i;
        printf("%d ",squa);
        sum=sum+squa;
    }
    printf("\nThe sum of square natural number upto %d terms = %d",n,sum);
    return 0;
}
/*
output:
Input the number of terms : 5
The square natural upto 5 terms are : 1 4 9 16 25 
The sum of square natural number upto 5 terms = 55
*/