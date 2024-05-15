//Write a program in c to find the maximum element in an array that is first increasing and than decreasing.

#include<stdio.h>
int main()
{
    int i,size,max=0;
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
    max=array[0];
    for(i=0;i<size;i++)
    {
        if(array[i-1]<array[i]&&array[i]>array[i+1])
        {
            max=array[i];
        }
    }
    printf("\nThe maximum element which is increasing then decreasing is : %d",max);
    return 0;
}

/*

output : 

Input the size of the array : 8
Input the element of the array : 
element - [0] : 2
element - [1] : 7
element - [2] : 12
element - [3] : 25
element - [4] : 4
element - [5] : 57
element - [6] : 27
element - [7] : 22
The given array is : 2 7 12 25 4 57 27 22 
The maximum element which is increasing then decreasing is : 57

*/