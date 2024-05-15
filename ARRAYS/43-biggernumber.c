//Write  a program in C to print the next greatest element in a given unsorted array. Element for which no superior element exists, consider th enext greatest element as -1.

#include<stdio.h>
int main()
{
    int i,j,size,count;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size],bigger[size];
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
    printf("\nNext Bigger Element are : \n");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(array[j]>array[i])
            {
                printf("\nNext bigger element of %d in the array is :  %d",array[i],array[j]);
                count++;
                bigger[i]=array[j];
                break;
            }
        }
        if(count==0)
        {
            printf("\nNext bigger element of %d in the array is : -1",array[i]);
            bigger[i]=-1;
        }
    }
    printf("\nNext bigger elements array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",bigger[i]);
    }
    return 0;
}

/*
output : 1

Input the size of the array : 6
Input the element of the array : 
element - [0] : 5
element - [1] : 3
element - [2] : 10
element - [3] : 9
element - [4] : 6
element - [5] : 13
The given array is : 5 3 10 9 6 13 
Next Bigger Element are :

Next bigger element of 5 in the array is :  10
Next bigger element of 3 in the array is :  10
Next bigger element of 10 in the array is :  13
Next bigger element of 9 in the array is :  13
Next bigger element of 6 in the array is :  13
Next bigger element of 13 in the array is : -1
Next bigger elements array :
10 10 13 13 13 -1

output : 2

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
The given array is : 1 2 3 4 5 
Next Bigger Element are :      

Next bigger element of 1 in the array is :  2
Next bigger element of 2 in the array is :  3
Next bigger element of 3 in the array is :  4
Next bigger element of 4 in the array is :  5
Next bigger element of 5 in the array is : -1
Next bigger elements array :
2 3 4 5 -1

*/