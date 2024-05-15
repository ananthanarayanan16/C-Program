//Write a c program to print first 20 natural number and their sum using goto sratement.

#include<stdio.h>
int main()
{
    int sum=0,n=1;
    printf("Natural number are : ");
    first:
    printf("%d ",n);
    sum=sum+n;
    n++;
    if(n<=20)
    {
        goto first;
    }
    printf("\nSum is : %d",sum);
    return 0;
}
/*
output:
Natural number are : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
Sum is : 210
*/