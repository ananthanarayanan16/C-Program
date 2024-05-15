//Write a program in C to find the largest subarray with an equal number of 0s and 1s.

#include<stdio.h>
int main()
{
    int i,j,sum,sum1=0,size,count_one,count_zero,starting,end;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=1;
        start:
        count_one=0;
        count_zero=0;
        for(j=i;j<=i+sum;j++)
        {
            if(array[j]==0)
            {
                count_zero++;
            }
            if(array[j]==1)
            {
                count_one++;
            }
            if((count_zero==count_one)&&(sum1<(count_zero+count_one)))
            {
                starting=i;
                end=j;
                sum1=count_zero+count_one;
            }
        }
        if(sum<size-1)
        {
            sum=sum+2;
            goto start;
        }
    }
    printf("\nSubarray found from the index %d to %d .",starting,end);
    return 0;
}