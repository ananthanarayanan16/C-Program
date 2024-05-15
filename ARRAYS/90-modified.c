//Given a array of size n such that every element is in the range from 0 to n-1. 
//write a program in C to rearrange the given array so that arrra[i] become array[array[i]].

#include<stdio.h>
int main()
{
    int i,size;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size],modifiedarray[size];
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
        modifiedarray[i]=array[array[i]];
    }
    printf("\nThe modified array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",modifiedarray[i]);
    }
    return 0;
}

/*

output : 

Input the size of the array : 5
Input the element of the array : 
element - [0] : 2
element - [1] : 1
element - [2] : 4
element - [3] : 3
element - [4] : 0
The given array is : 2 1 4 3 0 
The modified array is :        
4 1 0 3 2

*/