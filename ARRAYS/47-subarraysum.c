//Write a program in C to find a subarray with a given sum from the given array.

#include<stdio.h>
int main()
{
    int i,j,k,n,size,sum,count=0;
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
    printf("\nInput the sum of value : ");
    scanf("%d",&sum);
    for(i=0;i<size;i++)
    {
        n=array[i];
        for(j=i+1;j<size;j++)
        {
            n=n+array[j];
            if(n==sum)
            {
                printf("[%d ... %d]",i,j);
                printf(" --- { ");
                for(k=i;k<=j;k++)
                {
                    printf("%d ",array[k]);
                }
                printf("}");
                printf("\n");
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("\n\nThe sum %d is not in the array.",sum);
    }
    return 0;
}

/*
output : 1 

Input the size of the array : 5
Input the element of the array : 
element - [0] : 2
element - [1] : -2
element - [2] : 3
element - [3] : 2
element - [4] : 5
The given array is : 2 -2 3 2 5 
Input the sum of value : 5      
[0 ... 3] --- { 2 -2 3 2 }
[2 ... 3] --- { 3 2 }     

output : 2

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : -3
element - [2] : 2
element - [3] : 6
element - [4] : 7
The given array is : 1 -3 2 6 7 
Input the sum of value : 4


The sum 4 is not in the array.
*/