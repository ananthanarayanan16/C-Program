//Write a program in C to find the number occurring odd number of times in an array.

#include<stdio.h>
int main()
{
    int i,j,size,count=0;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size],copy[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
        copy[i]=array[i];
    }
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe element odd number of times is : ");
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                copy[j]=0;
            }
        }
        if(array[i]==copy[i])
        {
            array[i]=count;
            if(array[i]%2!=0)
            {
                printf("%d ",copy[i]);
            }
        }
    }
    return 0;
}

/*

output : 1

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 1
element - [3] : 1
element - [4] : 2
The given array is : 1 2 1 1 2
The element odd number of times is : 1  



output : 2

Input the size of the array : 6
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 1
element - [3] : 2
element - [4] : 1
element - [5] : 3
The given array is : 1 2 1 2 1 3 
The element odd number of times is : 1 3

*/


































































/*

    int i,j,size,count=0;
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
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        printf(" %d  ",count);
        if(count%2!=0)
        {
            printf("\nThe element odd number of times is : %d",array[i]);
            // break;
        }
    }
    return 0;
*/