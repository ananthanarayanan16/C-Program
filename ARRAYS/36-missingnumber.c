//Write a program in C to find the missing numberina given array. There are ano duplicate in the list.

#include<stdio.h>
int main()
{
    int i,j,size,count,swap;
    printf("Input the size of the array :");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("The given array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    count=array[0];
    for(i=0;i<size;i++)
    {
        if(count==array[i])
        {
            count++;
        }
    }
    printf("\nThe missing number is : %d",count);
    return 0;
}


/*
output : 
Input the size of the array :5
Input the element of the array : 
element - [0] : 81
element - [1] : 82
element - [2] : 83
element - [3] : 84
element - [4] : 86
The given array is :
81 82 83 84 86
The missing number is : 85
*/