//Write a program in C to merge one sorted array into another one sorted array.

#include<stdio.h>
int main()
{
    int i,j=0,size1,size2,swap;
    printf("Input the size of the first array : ");
    scanf("%d",&size1);
    printf("Input the size of the second array : ");
    scanf("%d",&size2);
    int array1[size1],array2[size2];
    printf("Input the element of the first array : \n");
    for(i=0;i<size1;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array1[i]);
    }
    printf("\nInput the element of the second array : \n");
    for(i=0;i<size2;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array2[i]);
    }
    printf("\nThe given first array is : ");
    for(i=0;i<size1;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\nThe given second array is : ");
    for(i=0;i<size2;i++)
    {
        printf("%d ",array2[i]);
    }
    //The below for loop is merging two arrays
    for(i=size1;i<size1+size2;i++)
    {
        array1[i]=array2[j];
        j++;
    }
    for(i=0;i<size1+size2;i++)
    {
        for(j=i+1;j<size1+size2;j++)
        {
            if(array1[i]>array1[j])
            {
                swap=array1[i];
                array1[i]=array1[j];
                array1[j]=swap;
            }
        }
    }
    printf("\nAfter merged the array is : ");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d ",array1[i]);
    }
    return 0;
}

/*
output:

Input the size of the first array : 4
Input the size of the second array : 5
Input the element of the first array : 
element - [0] : 1
element - [1] : 2
element - [2] : 5
element - [3] : 3

Input the element of the second array :
element - [0] : 4
element - [1] : 6
element - [2] : 8
element - [3] : 7
element - [4] : 9

The given first array is : 1 2 5 3
The given second array is : 4 6 8 7 9
After merged the array is : 1 2 3 4 5 6 7 8 9
*/