//Write a program in C to find the maximum product subarray in a given array.

#include<stdio.h>
int main()
{
    int i,j,max=0,size,product;
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
        product=1;
        for(j=i;j<size;j++)
        {
            product=product*array[j];
        }
        if(product>max)
        {
            max=product;
        }
    }
    printf("\nThe maximum product of a subarray in the given array is : %d",max);
    return 0;
}

/*
output : 

Input the size of the array : 8
Input the element of the array : 
element - [0] : -4
element - [1] : 9
element - [2] : -7
element - [3] : 0
element - [4] : -15
element - [5] : 6
element - [6] : 2
element - [7] : -3
The given array is : -4 9 -7 0 -15 6 2 -3 
The maximum product of a subarray in the given array is : 540

*/