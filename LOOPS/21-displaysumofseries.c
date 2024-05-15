//write a program in c to display the sum of the series.

#include<stdio.h>
int main()
{
    int i,term,sum=1,sum1=0;
    printf("Input the number of terms : ");
    scanf("%d",&term);
    for(i=1;i<=term;i++)
    {
        sum=(sum*10);
        sum1=sum1+sum-1;
        printf("%d ",sum-1);
    }
    printf("\nThe sum of the series = %d",sum1);
    return 0;
}
/*
output:
Input the number of terms : 5
9 99 999 9999 99999 
The sum of the series = 111105
*/