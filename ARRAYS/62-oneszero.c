//Write a program in C to find the largest subarray with an equal number of 0s and 1s.

#include<stdio.h>
int main()
{
    int i,j,sum1,sum2=0,count_one,count_zero,starting,end,size;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        sum1=1;
        start:
        count_zero=0;
        count_one=0;
        for(j=i;j<i+size;j++)
        {
            if(array[j]==0)
            {
                count_zero++;
            }
            if(array[j]==1)
            {
                count_one++;
            }
            if(count_zero==count_one&&sum2<(count_one+count_zero))
            {
                starting=i;
                end=j;
                sum2=count_one+count_zero;
            }
        }
        if(sum1<size-1)
        {
            sum1=sum1+2;
            goto start;
        }
    }
    printf("\nSubarray found from the index %d to %d .",starting,end);
    return 0;
}


/*
output : 

Input the size of the array : 10
Input the element of the array : 
element - [0] : 0
element - [1] : 1
element - [2] : 0
element - [3] : 0
element - [4] : 1
element - [5] : 1
element - [6] : 0
element - [7] : 1
element - [8] : 1
element - [9] : 1
The given array is : 0 1 0 0 1 1 0 1 1 1 
Subarray found from the index 0 to 7 .

*/