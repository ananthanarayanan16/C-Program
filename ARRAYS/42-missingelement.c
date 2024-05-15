//Write a program in C to find the smallest element in a sorted array.

#include<stdio.h>
int main()
{
    int i,size,count;
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
    count=array[0];
    for(i=0;i<size;i++)
    {
        if(count==array[i])
        {
            count++;
        }
    }
    if(count>=array[size-1])
    {
        printf("\nThere is no missing element in the array.");
    }
    else
    {
        printf("\nThe missing smallest element is : %d",count);
    }
    return 0;
}

/*
output : 1

Input the size of the array : 5
Input the element of the array : 
element - [0] : 0
element - [1] : 1
element - [2] : 3
element - [3] : 4
element - [4] : 5
The given array is : 0 1 3 4 5 
The missing smallest element is : 2

output : 2

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 3
element - [4] : 3
The given array is : 1 2 3 3 3 
There is no missing element in the array.

*/