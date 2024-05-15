//Write a program in C to print all possible combination of r elements in a given array.

#include<stdio.h>
int main()
{
    int i,j,k,l,size,number;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input teh element of the array : \n");
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
    printf("\nThe combination from by the number of element are : ");
    scanf("%d",&number);
    printf("The combination are : \n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            for(k=j+1;k<size;k++)
            {
                for(l=k+1;l<size;l++)
                {
                    printf("%d %d %d %d\n",array[i],array[j],array[k],array[l]);
                }
            }
        }
    }
    return 0;
}

/*

output : 

Input the size of the array : 6
Input the element of the array : 
PS F:\C-Program\ARRAYS> gcc -o output 82-combination.c
PS F:\C-Program\ARRAYS> ./output
Input the size of the array : 5
Input teh element of the array : 
element - [0] : 1
element - [1] : 5
element - [2] : 4
element - [3] : 6
element - [4] : 8
The given array is : 1 5 4 6 8
The combination from by the number of element are : 4
The combination are : 
1 5 4 6
1 5 4 8
1 5 6 8
1 4 6 8
5 4 6 8

*/