//Write a program in C to find out if a given integer X appears more than n/2 times in the sorted array of n integers.

#include<stdio.h>
int main()
{
    int i,j,size,count1=0,value,count2=0;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the elements of the array :\n");
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
    printf("\nGive a value : ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        if(value==array[i])
        {
            count1++;
            count2++;
        }
    }
    if(count2!=0)
    {
        if(count1>size/2)
        {
             printf("%d appears more than %d times in the given array[].",value,size/2);     
        }
        else
        {
            printf("%d appears but not more than %d times in the given array[].",value,size/2);
        }
    }
    else
    {
        printf("The given number %d is not present in the array[].",value);
    }
    return 0;
}

/*
output : 1

Input the size of the array : 5
Input the elements of the array :
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
The given array is : 1 2 3 4 5 
Give a value : 6
The given number 6 is not present in the array[].

output : 2

Input the size of the array : 5
Input the elements of the array :
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 2
element - [4] : 4
The given array is : 1 2 3 2 4
Give a value : 2
2 appears but not more than 2 times in the given array[]

output 3 :

Input the size of the array : 5
Input the elements of the array :
element - [0] : 1  
element - [1] : 2
element - [2] : 3
element - [3] : 2
element - [4] : 2
The given array is : 1 2 3 2 2 
Give a value : 2
2 appears more than 2 times in the given array[].

*/