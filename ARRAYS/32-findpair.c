//Write a program in C to find a pair with given sum in the array.

#include<stdio.h>
int main()
{
    int i,j,size,sum,count=0;;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("Input the sum : ");
    scanf("%d",&sum);
    printf("The given array : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe given sum is : %d",sum);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if((array[i]+array[j])==sum)
            {
                count++;
                goto out;
            }
        }
    }
    out:
    if(count!=0)
    {
        printf("\nPair of the element can be make the given sum by the value of index %d and %d.",i,j);
        
    }
    else
    {
        printf("\nThere is no pair element in the given array.");
    }
    return 0;
}

/*
output 1 : 

Input the size of the array : 5
Input the element of the array :
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
Input the sum : 9
The given array : 1 2 3 4 5
The given sum is : 9
Pair of the element can be make the given sum by the value of index 3 and 4.

output 2:

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
Input the sum : 10
The given array : 1 2 3 4 5 
The given sum is : 10
There is no pair element in the given array.*/