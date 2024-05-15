//Write a program in C to find a pair with the given difference.

#include<stdio.h>
int main()
{
    int i,j,number,size,difference;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("Input the difference : ");
    scanf("%d",&number);
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe given difference is : %d ",number);
    printf("\nThe pair are : ");
    for(i=0;i<size;i++)
    {
        difference=0;
        for(j=i+1;j<size;j++)
        {
            difference=array[i]-array[j];
            if(difference==number||difference*-1==number)
            {
                printf("(%d , %d)",array[i],array[j]);
                break;
            }
        }
    }
    return 0;
}

/*
output : 

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : 15
element - [2] : 39
element - [3] : 75
element - [4] : 92
Input the difference : 53
The given array is : 1 15 39 75 92 
The given difference is : 53
The pair are : (39 , 92)

*/