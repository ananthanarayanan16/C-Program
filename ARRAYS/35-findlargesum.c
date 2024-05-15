//Write a program in C to find the largest sum of contigous subarray in an array.

#include<stdio.h>
int main()
{
    int i,j,size,large=0,sum=0;
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
        sum=0;
        for(j=i;j<size;j++)
        {
            sum=sum+array[j];
            // if(sum>large)
            // {
                // large=sum;
            // }
        }
        if(sum>large)
        {
            large=sum;
        }
    }
    printf("\nThe largest sum of contigous subarray is : %d",large);
    return 0;
}


/*
output : 1

Input the size of the array : 8
Input the element of the array : 
element - [0] : 8
element - [1] : 3
element - [2] : 8
element - [3] : -5
element - [4] : 4
element - [5] : 3
element - [6] : -4
element - [7] : 3
The given array is : 8 3 8 -5 4 3 -4 3 
The largest sum of contigous subarray is : 20

*/