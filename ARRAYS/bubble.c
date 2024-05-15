//Bubble sorting.

#include<stdio.h>
int main()
{
    int i,n,size,swap;
    printf("Input the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input %d element to the array : \n",size);
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("The given array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe sorted array is (Using Bubble sort) : \n");
    n=size;
    start:
    for(i=0;i<n;i++)
    {
        if(array[i]>array[i+1])
        {
            swap=array[i];
            array[i]=array[i+1];
            array[i+1]=swap;
        }
        if(i==n-1)
        {
            n--;
            goto start;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

/*

output : 

Input the size of array : 5
Input 5 element to the array : 
element - [0] : 9
element - [1] : 1
element - [2] : 8
element - [3] : 2
element - [4] : 5
The given array :
9 1 8 2 5
The sorted array is (Using Bubble sort) : 
1 2 5 8 9

*/