//Write a program in C to find the maximum circular subarray sum of a given array.

#include<stdio.h>
int main()
{
    int i,j,size,sum,max=0;
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
        sum=0;
        for(j=i;j<size;j++)
        {
            sum=sum+array[j];
            if(sum>max)
            {
                max=sum;
            }
        }
        for(j=0;j<i-1;j++)
        {
            sum=sum+array[j];
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    printf("\nThe maximum circular sum in the above array is : %d",max);
    return 0;
}


/*

output :

Input the size of the array : 9
Input the element of the array : 
element - [0] : 10
element - [1] : 8
element - [2] : -20
element - [3] : 5
element - [4] : -3
element - [5] : -5
element - [6] : 10
element - [7] : -13
element - [8] : 11
The given array is : 10 8 -20 5 -3 -5 10 -13 11 
The maximum circular sum in the above array is : 29

*/