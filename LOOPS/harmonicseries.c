//Write a program in C to display the n terms of a harmonic series and their sum.

#include<stdio.h>
int main()
{
    int n;
    float i,sum=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
        printf("1/%0.f + ",i);
    }
    // printf("\b");
    printf("\nSum of series upto %d terms : %f",n,sum);
    return 0;
}
/*
Output:
Input the number of terms : 5
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +        
Sum of series upto 5 terms : 2.283334
*/