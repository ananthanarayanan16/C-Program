//Write a c program to find the sum of the G.P.series.

#include<stdio.h>
int main()
{
    int first,term,cr,i;
    float sum,sum1=0;
    printf("Input the first number of the G.P.series : ");
    scanf("%d",&first);
    printf("Input the number or term in the G.P.series : ");
    scanf("%d",&term);
    printf("Input the common ratio of G.P.series : ");
    scanf("%d",&cr);
    printf("The number for the G.P.series : \n");
    sum=first;
    for(i=1;i<=term;i++)
    {
        printf("%f ",sum);
        sum1=sum1+sum;
        sum=sum*cr;
    }
    printf("\nThe sum of the G.P.series : %f",sum1);
    return 0;
}
/*output:
Input the first number of the G.P.series : 3
Input the number or term in the G.P.series : 5
Input the common ratio of G.P.series : 2
The number for the G.P.series : 
3.000000 6.000000 12.000000 24.000000 48.000000
The sum of the G.P.series : 93.000000
*/