//Write a c program to find the sum of an A.P.series.

#include<stdio.h>
int main()
{
    int i,start,end,sum=1,sum1=0,cd;
    printf("Input the starting number of the A.P.series : ");
    scanf("%d",&start);
    printf("Input the number of item for the A.P.series : ");
    scanf("%d",&end);
    printf("Input the common difference of A.P.series : ");
    scanf("%d",&cd);
    printf("The sum of the A.P.series are : \n");
    for(i=start;i<=end;i++)
    {
        printf("%d + ",sum);
        sum1=sum1+sum;
        sum=sum+cd;
    }
    printf("\b\b = %d",sum1);
    return 0;
}
/*
output:
Input the starting number of the A.P.series : 1
Input the number of item for the A.P.series : 11
Input the common difference of A.P.series : 4
The sum of the A.P.series are :
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 + 41  = 231
*/