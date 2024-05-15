//write aprogram in c to find the sum of the series.

#include<stdio.h>
int main()
{
    int i,j,x,n,sum,squa=1,m=1;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input numbe of terms : ");
    scanf("%d",&n);
    sum=x;
    for(i=1;i<=n;i++)
    {
        if(i>1)
        {
            squa=1;
            m+=2;
            for(j=1;j<=m;j++)
            {
                squa=squa*x;
            }
            (i%2==0)?(sum=sum-squa):(sum=sum+squa);
        }
    }
    printf("\nThe sum is : %d",sum);
    return 0;
}

/*
output:
Input the value of x : 3
Input number of terms : 5

The sum is : 17715
*/