//Write a program in C to find the pivot element of a sorted and rotated array using binary search.

#include<stdio.h>
int main()
{
    int i,search,size,count=0;
    printf("Input the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element in the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("\nInput the search element : ");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(search==array[i])
        {
            printf("The search element is %d the location is %d.",search,i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("The search element %d is not located in the given array.",search);
    }
    return 0;
}

/*
output : 1

Input the size of array : 5
Input the element in the array : 
element - [0] : 11
element - [1] : 22
element - [2] : 33
element - [3] : 4
element - [4] : 5

Input the search element : 11
The search element is 11 the location is 0.

output : 2

Input the size of array : 5
Input the element in the array : 
element - [0] : 1
element - [1] : 88
element - [2] : 2
element - [3] : 77
element - [4] : 33

Input the search element : 22
The search element 22 is not located in the given array.
*/