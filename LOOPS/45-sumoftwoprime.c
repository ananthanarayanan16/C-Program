//writer a program in c to check whether a number can be expressed as the sum of the prime number.

#include<stdio.h>
int main()
{
    int n,m,i,j,count1=0,x,y,t=0;
    printf("Input the positive integer : ");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n/2;i++)
    {
        x=i;
        y=m--;
        count=0;
        for(j=1;j<=i;j++)
        {
           if(x%j==0)
           {
              count++;
           }
        }
        for(j=1;j<=y;j++)
        {
           if(m%j==0)
           {
              count++;
           }
        }
        if(count==4)
        {
            if(x+m==n)
            {
                printf("\n%d = %d + %d",n,x,m);
            }
            t++;
        }
    }
    if(t==0)
    {
        printf("There is no combination of sum of two prime numbers.");
    }
    return 0;
}
    
/*
output:
Input the positive integer : 24

24 = 5 + 19
24 = 7 + 17
24 = 11 + 13
*/                      