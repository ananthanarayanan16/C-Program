//Write a program in c to find the sum of the series.

#include<stdio.h>
int main()
{
    int i,n,sum=1,sum1=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d + ",sum);
        sum1=sum1+sum;
        sum=sum*10+1;
    }
    printf("\b\b ");
    printf("\nThe sum is : %d",sum1);
    return 0;
}
/*
Output:
Input the number of terms : 6
1 + 11 + 111 + 1111 + 11111 + 111111   
The sum is : 123456
*/