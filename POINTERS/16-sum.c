//Write a program in C to compute the sum of all element in an array using pointers.

#include<stdio.h>
#include<stdlib.h>
int sum(int*,int);
void main()
{
    int size;
    printf("Input the number of element to store in the array(max 10) : ");
    scanf("%d",&size);
    int *ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory cannot allocated.");
    }
    else
    {
        printf("Memory allocated successfully.");
        printf("\nInput %d number of elements in the array :\n",size);
        for(int i=1;i<=size;i++)
        {
            printf("element - %d : ",i);
            scanf("%d",&ptr[i]);
        }
        printf("\nThe sum of array is : %d.",sum(ptr,size));
    }
}
int sum(int *ptr,int size)
{
    int i,sum=0;
    for(i=1;i<=size;i++)
    {
        sum=sum+ptr[i];
    }
    return sum;
}

/*
output : 

Input the number of element to store in the array(max 10) : 5
Memory allocated successfully.
Input 5 number of elements in the array :
element - 1 : 1
element - 2 : 2
element - 3 : 3
element - 4 : 4
element - 5 : 5

The sum of array is : 15.

output :

Input the number of element to store in the array(max 10) : 5
Memory allocated successfully.
Input 5 number of elements in the array :
element - 1 : -1
element - 2 : 3
element - 3 : -10
element - 4 : 2
element - 5 : 8

The sum of array is : 2.


*/