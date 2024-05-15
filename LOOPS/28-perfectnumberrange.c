//Write a c program to find the perfect number within a given number of range.

#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0,z=0;
    printf("Input the starting range or number : ");
    scanf("%d",&n);
    printf("Input the ending range or number : ");
    scanf("%d",&m);
    printf("The perfect number within the given range : ");
    for(i=n;i<=m;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d ",i);
            z++;
        }
    }
    if(z==0)
    {
        printf("There is no perfect number.");
    }
    return 0;
}
/*
output:
Input the starting range or number : 1
Input the ending range or number : 100
The perfect number within the given range : 6 28 

output 2:

Input the starting range or number : 100
Input the ending range or number : 1000
The perfect number within the given range : 496 

*/