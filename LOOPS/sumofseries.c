//write a program in c to find the sum of the series

#include<stdio.h>
int main()
{
    int i,j,n,m=0;
    float x,squa,fact,term,sum=1;
    printf("Input the value X : ");
    scanf("%f",&x);
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        squa=1;
        fact=1;
        if(i>1)
        {
            m=m+2;
            for(j=1;j<=m;j++)
            {
                squa=squa*x;
                fact=fact*j;
            }
            term=(squa/fact);
        }
        (i%2==0)?(sum=sum-term):(sum=sum+term);
    }
    printf("\nThe Sum : %f",sum);
    printf("\nNumber of term : %d",n);
    printf("\nValue of X : %f",x);
    return 0;
}


 /*
 output:
Input the value X : 2
Input the number of terms : 5

The Sum : -0.415873  
Number of term : 5   
Value of X : 2.000000
 */