//Write a program in c to read n number of values in an array and display them in reverse order.

#include<stdio.h>
int main()
{
    int i,size;
    printf("Input the number of element to store in the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input %d number of element in the array : \n",size);
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("The values store into the array are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe values store into the array in reverse are : \n");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
/*
output:
Input the number of element to store in the array : 5
Input 5 number of element in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
The values store into the array are :
1 2 3 4 5
The values store into the array in reverse are : 
5 4 3 2 1
*/