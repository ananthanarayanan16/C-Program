//Write a program in C to find the equilibrium index of an arrray.

#include<stdio.h>
int main()
{
    int i,j,size,sum_1,sum_2;
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
    printf("\nThe equilibrium index found at : ");
    for(i=0;i<size;i++)
    {
        sum_1=0;
        sum_2=0;
        for(j=0;j<i;j++)
        {
            sum_1=sum_1+array[j];
        }
        for(j=i+1;j<size;j++)
        {
            sum_2=sum_2+array[j];
        }
        if(sum_1==sum_2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

/*
output : 

Input the size of the array : 8
Input the element of the array : 
element - [0] : 0
element - [1] : -4
element - [2] : 7
element - [3] : -4
element - [4] : -2
element - [5] : 6
element - [6] : -3
element - [7] : 0
The given array is : 0 -4 7 -4 -2 6 -3 0 
The equilibrium index found at : 0 5 7

*/