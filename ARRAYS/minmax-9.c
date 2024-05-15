//Write a program in c to find the maximum and minimum element in an array.

#include<stdio.h>
int main()
{
    int i,j,size,swap,max=0,min;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array : \n",size);
    int array[size];
    min=size-1;
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]<array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    printf("Maximum element is : %d\n",array[max]);
    printf("Minimum element is : %d",array[min]);
    return 0;
}

/*
output:
Input the number of elements to be stored in the array : 4
Input 4 elements in the array : 
element - 0 : 11
element - 1 : 33
element - 2 : 22
element - 3 : 55
Maximum element is : 55
Minimum element is : 11
*/