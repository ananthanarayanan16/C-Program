//Write a program in C to find the ceiling in a sorted array.

#include<stdio.h>
int main()
{
    int i,size,ceiling;
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
    printf("\nInput the ceiling of the array : ");
    scanf("%d",&ceiling);
    printf("The ceiling of %d is : ",ceiling);
    for(i=0;i<size;i++)
    {
        // if(array[i]>=ceiling)
        if(ceiling<=array[i])
        {
            printf("%d",array[i]);
            break;
        }
    }
    return 0;
}

/*
output :

Input the size of the array : 5
Input the element of the array : 
element - [0] : 10
element - [1] : 20
element - [2] : 25
element - [3] : 30
element - [4] : 40
The given array is : 10 20 25 30 40 
Input the ceiling of the array : 18
The ceiling of 18 is : 20

*/