//Write a progrm in C to find second largest element in a array .

#include<stdio.h>
int main()
{
    int i,j,swap,size;
    printf("Input the size of array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array : \n",size);
    int array[size];
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
    printf("\nThe Second largest element in the array : %d",array[1]);
    return 0;
}
/*
output:
Input the size of array : 5
Input 5 elements in the array : 
element - 0 : 1
element - 1 : 9
element - 2 : 2
element - 3 : 6
element - 4 : 4

The Second largest element in the array : 6
*/