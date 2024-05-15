//Write a program in C find the majority element of an array.

#include<stdio.h>
int main()
{
    int i,j,size,count1=0,count2=0;
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
        count1=0;
        for(j=0;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count1++;
            }
        }
        if(count1>size/2)
        {
            printf("\nThe majority element in the given array is : %d",array[i]);
            count2++;
            break;
        }
    }
    if(count2==0)
    {
        printf("\nThere are no majority elements in the given array.");
    }
    return 0;
}

/*
output 1:
Input the size of the array : 8
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 1
element - [5] : 1
element - [6] : 3
element - [7] : 1
The given array is : 1 2 3 4 1 1 3 1
There are no majority elements in the given array.

output 2:

Input the size of the array : 5
Input the element of the array : 
element - [0] : 2
element - [1] : 1
element - [2] : 3
element - [3] : 1
element - [4] : 1
The given array is : 2 1 3 1 1 
The majority element in the given array is : 1
*/