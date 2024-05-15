//write a programm in C to delete an element at a desired position from an array.

#include<stdio.h>
int main()
{
    int i,size,position;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array in ascending order : \n",size);
    int array[size];
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("Input the position where to be delete : ");
    scanf("%d",&position);
    for(i=position-1;i<size;i++)
    {
        array[i]=array[i+1];
    }
    for(i=0;i<size-1;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
/*
output:
Input the size of the array : 5
Input 5 elements in the array in ascending order : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to be delete : 3
1 2 4 5

output : 2

Input the size of the array : 5
Input 5 elements in the array in ascending order : 
element - 0 : -1
element - 1 : -3
element - 2 : -4
element - 3 : -2
element - 4 : -8
Input the position where to be delete : 1
-3 -4 -2 -8 


*/