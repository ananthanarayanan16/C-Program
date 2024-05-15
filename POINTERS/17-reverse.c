//Write a program in C to print the elements of an array in reverse order.

#include<stdio.h>
#include<stdlib.h>
void reverse(int*,int);
int main()
{
    int size;
    printf("Input the number of element to store in the array (max 15) : ");
    scanf("%d",&size);
    int array[size];
    printf("Input %d number of elements in the array : \n",size);
    for(int i=1;i<=size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("The elements of array in reverse order are : \n");
    reverse(array,size);
    return 0;
}
void reverse(int *arr,int size)
{
    for(int i=size;i>=1;i--)
    {
        printf("element - %d : %d\n",i,arr[i]);
    }
}


/*
output : 

Input the number of element to store in the array (max 15) : 5
Input 5 number of elements in the array : 
element - 1 : 3
element - 2 : 4
element - 3 : 5
element - 4 : 6
element - 5 : 7
The elements of array in reverse order are : 
element - 5 : 7
element - 4 : 6
element - 3 : 5
element - 2 : 4
element - 1 : 3

*/