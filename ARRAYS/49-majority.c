//Write a program in C to find the majority element of an array.

#include<stdio.h>
int main()
{
    int i,j,size,count1,count2=0;
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
        for(j=i;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count1++;
            }
        }
        if(count1>size/2)
        {
            printf("\nThe majority of the element is : %d",array[i]);
            count2++;
            break;
        }
    }
    if(count2==0)
    {
        printf("\nThere is no majority element in the given array[].");
    }
    return 0;
}

/*
output : 1

Input the size of the array : 5
Input the element of the array :
element - [0] : 1
element - [1] : 1
element - [2] : 1
element - [3] : 2
element - [4] : 3
The given array is : 1 1 1 2 3
The majority of the element is : 1

output : 2 

Input the size of the array : 7
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 2
element - [4] : 2
element - [5] : 3
element - [6] : 4
The given array is : 1 2 3 2 2 3 4
There is no majority element in the given array[].
*/