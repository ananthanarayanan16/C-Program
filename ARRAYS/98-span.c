//Write a program in C to return the largest span found in the leftmost and rightmost appearance of the same value in a given array.

#include<stdio.h>
int main()
{
    int i,j,k,m,size,span=0,maxspan=0;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("The given array are : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        span=0;
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                m=j;
                break;
            }
        }
        // printf("  \n ###  %d __   %d __",i,j);
        for(k=i;k<=m;k++)
        {
            span++;
        }
        if(maxspan<span)
        {
            maxspan=span;
        }
    }
    printf("\nThe span between the same values in the array is :%d",maxspan);
    return 0;
}

/*

output : 1

Input the size of the array : 6
Input the element of the array : 
element - [0] : -1
element - [1] : -2
element - [2] : 3
element - [3] : 4
element - [4] : -1
element - [5] : -11
The given array are : -1 -2 3 4 -1 -11 
The span between the same values in the array is :5


output : 2


Input the size of the array : 9
Input the element of the array : 
element - [0] : 17
element - [2] : 19
element - [3] : 7
element - [4] : 27
element - [5] : 24
element - [6] : 17
element - [7] : 54
element - [8] : 73
The given array are : 17 42 19 7 27 24 17 54 73
The span between the same values in the array is :7

*/