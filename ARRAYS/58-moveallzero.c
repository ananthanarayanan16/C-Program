//Write a program in C to move all zero to the end of a given array.

#include<stdio.h>
int main()
{
    int i,j,size,swap;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(array[i]==0)
        {
            for(j=size-1;j>=i;j--)
            {
                if(array[j]!=0)
                {
                    swap=array[j];
                    array[j]=array[i];
                    array[i]=swap;
                    break;
                }
            }
        }
    }
    printf("\nThe new array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

/*
output : 

Input the size of the array : 10
Input the element of the array : 2 5 7 0 4 0 7 -5 8 0

The given array is : 2 5 7 0 4 0 7 -5 8 0 
The new array is :
2 5 7 8 4 -5 7 0 0 0
*/