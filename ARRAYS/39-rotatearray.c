//write a program in C to rotate an array by N position.

#include<stdio.h>
int main()
{
    int i,j=0,size,position;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size],rotatedarray[size];
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
    printf("\nEnter the position to rotate : ");
    scanf("%d",&position);
    printf("From %dth position the values of the array are : ",position);
    for(i=position;i<size;i++)
    {
        printf("%d ",array[i]);
        rotatedarray[j]=array[i];
        j++;
    }
    printf("\nBefore %dth position the values of the array are : ",position);
    for(i=0;i<position;i++)
    {
        printf("%d ",array[i]);
        rotatedarray[j]=array[i];
        j++;
    }
    printf("\nAfter rotating from %dth position the array is : \n",position);
    for(i=0;i<size;i++)
    {
        printf("%d ",rotatedarray[i]);
    }
    return 0; 
}

/*
output: 

Input the size of the array : 6
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
element - [5] : 6
The given array is : 1 2 3 4 5 6 
Enter the position to rotate : 2 
From 2th position the values of the array are : 3 4 5 6 
Before 2th position the values of the array are : 1 2
After rotating from 2th position the array is :
3 4 5 6 1 2


*/