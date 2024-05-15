//Write a program in C to find the smallest positive number missing from an unsorted array.

#include<stdio.h>
int main()
{
    int i,j,size,count=0,swap;
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
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        if(array[i]>0)
        {
            if(count==0)
            {
                count=array[i];
            }
        }
        if(count==array[i])
        {
            count++;
        }
    }
    printf("\nThe smallest positive number missed is : %d",count);
    return 0;
} 

/*
output : 1 

Input the size of the array : 9
Input the element of the array : 
element - [0] : 3
element - [1] : 1
element - [2] : 4
element - [3] : 10
element - [4] : -5
element - [5] : 15
element - [6] : 2
element - [7] : -10
element - [8] : -20
The given array is : 3 1 4 10 -5 15 2 -10 -20 
The smallest positive number missed is : 5

output : 2

Input the size of the array : 6
Input the element of the array : 
element - [0] : 1
element - [1] : -2
element - [2] : 6
element - [3] : 5
element - [4] : 4
element - [5] : 3
The given array is : 1 -2 6 5 4 3
The smallest positive number missed is : 2

*/