//Write a program in C  to replace every element with the greatest element on its right side .

#include<stdio.h>
int main()
{
    int i,j,num=0,size;
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
        num=0;
        for(j=i+1;j<size;j++)
        {
            if(array[j]>num)
            {
                num=array[j];
            }
        }
        if(i==size-1)
        {
            array[i]=0;
        }
        else
        {
            array[i]=num;
        }
    }
    printf("\nAfter replace the modified array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}



/*
output : 

Input the size of the array : 10
Input the element of the array : 
element - [0] : 7
element - [1] : 5
element - [2] : 8
element - [3] : 9
element - [4] : 6
element - [5] : 8
element - [6] : 5
element - [7] : 7
element - [8] : 4
element - [9] : 6
The given array is : 7 5 8 9 6 8 5 7 4 6 
After replace the modified array is : 9 9 9 8 8 7 7 6 6 0

*/