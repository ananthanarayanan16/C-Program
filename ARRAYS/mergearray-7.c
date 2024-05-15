//Write a program in c to merge two arrays of the same size sorted in descending order.

#include<stdio.h>
int main()
{
    int i,j,t=0,swap,size1;
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d",&size1);
    printf("Input %d elements in the array : \n",size1);
    int array1[size1];
    for(i=0;i<size1;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array1[i]);
    }
    int size2;
    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d",&size2);
    printf("Input %d elements in the array : \n",size2);
    int array2[size2];
    for(i=0;i<size2;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array2[i]);
    }
    array1[size1+size2];
    for(i=size1;i<size1+size2;i++)
    {
            array1[i]=array2[t];
            t++;
    }
    for(i=0;i<size1+size2;i++)
    {
        for(j=i+1;j<size1+size2;j++)
        {
            if(array1[i]<array1[j])
            {
                swap=array1[i];
                array1[i]=array1[j];
                array1[j]=swap;
            }
        }
    }
    printf("The merged array in descending order is : \n");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d ",array1[i]);
    }
    return 0;
}

/*
output:
Input the number of elements to be stored in the first array : 3
Input 3 elements in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array : 3
Input 3 elements in the array : 
element - 0 : 3
element - 1 : 2
element - 2 : 1
The merged array in descending order is : 
3 3 2 2 1 1 
*/