//write a c program to find the armstrong number for a given range of number.

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,start,end,x,y,sum=0,t=0,z=1,o;
    printf("Input the starting number of range : ");
    scanf("%d",&start);
    printf("Input the ending number of range : ");
    scanf("%d",&end);
    printf("Armstrong number in given range are :  ");
    for(i=start;i<=end;i++)
    {
        y=i;
        t=0;
        while(y>0)
        {
            y=y/10;
            t++;
        }
        sum=0;
        y=i;
        while(y>0)
        {
            z=1;
            x=y%10;
            for(j=1;j<=t;j++)
            {
                z=z*x;
            }
            sum=sum+z;
            y=y/10;
        }
        if(sum==i)
        {
            printf("%d ",sum);
        }
    }
    return 0;
}