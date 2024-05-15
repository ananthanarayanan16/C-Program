//write a program in c to find the sum of the series.

#include<stdio.h>
int main()
{
    int i,j,n,x,cube,sum,m=1;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input number of terms : ");
    scanf("%d",&n);
    printf("The values of series : \n");
    sum=x;
    printf("%d\n",sum);
    for(i=1;i<=n;i++)
    {   
        cube=x;
        if(i>1)
        {
            m+=2;
            for(j=1;j<m;j++)
            {
                cube=cube*x;
            }
                    (i%2==0)?(sum=sum-cube,printf("-%d\n",cube)):(sum=sum+cube,printf("%d\n",cube));
        }
    }
    printf("The sum = %d",sum);
    return 0;
}
/*
output:
Input the value of x : 2
Input number of terms : 6
The values of series : 
2
-8
32
-128
512
-2048
The sum = -1638  
*/