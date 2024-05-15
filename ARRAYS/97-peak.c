//Write a program in C to find the index of the first peak element in a given array.

#include<stdio.h>
int main()
{
    int i,size,peak=0,index;
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
        if(peak<array[i])
        {
            peak=array[i];
            index=i;
        }
        else
        {
            break;
        }
    }
    printf("\nThe index of first peak element in the array is : %d",index);
    return 0;
}

/*

output : 

Input the size of the array : 9
Input the element of the array : 
element - [0] : 5
element - [1] : 12
element - [2] : 14
element - [3] : 20
element - [4] : 16
element - [5] : 19
element - [6] : 11
element - [7] : 7
element - [8] : 25
The given array is : 5 12 14 20 16 19 11 7 25 
The index of first peak element in the array is : 3

*/