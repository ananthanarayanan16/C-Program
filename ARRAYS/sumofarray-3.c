//Write a program in c to find the sum of all element of the array.

#include<stdio.h>
int main()
{
    int i,n,array[10],sum=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    printf("Input %d elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
    return 0;
}
/*
output:
Input the number of elements to be stored in the array : 3
Input 3 elements in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
Sum of all elements stored in the array is : 6
*/