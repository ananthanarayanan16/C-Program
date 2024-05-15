//write a program in c to copy the elements of one array into another array.

#include<stdio.h>
int main()
{
    int i,size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);
    int array1[size],array2[size];
    printf("Input %d elements in the array : \n",n);
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array1[i]);
        array2[i]=array1[i];
    }
    printf("The elements stored in the first array are :\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\nThe elements copied into the second array are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array2[i]);
    }
    return 0;
}
/*
output:
Input the number of elements to be stored in the array : 4
Input 4 elements in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
The elements stored in the first array are :    
1 2 3 4
The elements copied into the second array are : 
1 2 3 4
*/