//Write a program in C to find the floor and ceiling of the number 0 to 10 from a sorted array.

#include<stdio.h>
int main()
{
    int i,j,size;
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
    for(i=0;i<=10;i++)
    {
        printf("\nNumber : %d ",i);
        for(j=0;j<size;j++)
        {
            if(array[j]>=i)
            {
                printf("ceiling is : %d ",array[j]);
                break;
            }
            if(i>array[size-1])
            {
                printf("ceiling is : -1 ");
                break;
            }
        }
        for(j=size-1;j>=0;j--)
        {
            if(array[j]<=i)
            {
                printf(" floor is : %d ",array[j]);
                break;
            }
            if(i<=0)
            {
                printf(" floor is : -1 ");
                break;
            }
        }
    }
    return 0;
}

/*
output : 

Input the size of the array : 6
Input the element of the array : 
element - [0] : 1
element - [1] : 3
element - [2] : 5
element - [3] : 7
element - [4] : 8
element - [5] : 9
The given array is : 1 3 5 7 8 9
Number : 0 ceiling is : 1  floor is : -1 
Number : 1 ceiling is : 1  floor is : 1  
Number : 2 ceiling is : 3  floor is : 1
Number : 3 ceiling is : 3  floor is : 3
Number : 4 ceiling is : 5  floor is : 3
Number : 5 ceiling is : 5  floor is : 5
Number : 6 ceiling is : 7  floor is : 5 
Number : 7 ceiling is : 7  floor is : 7
Number : 8 ceiling is : 8  floor is : 8 
Number : 9 ceiling is : 9  floor is : 9
Number : 10 ceiling is : -1  floor is : 9
*/