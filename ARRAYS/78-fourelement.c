//Write a program in C to find four array element whose sum is equal to a given number.

#include<stdio.h>
int main()
{
    int i,j,k,l,size,number,sum=0;
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
    printf("\nInput the number : ");
    scanf("%d",&number);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            for(k=j+1;k<size;k++)
            {
                for(l=k+1;l<size;l++)
                {
                    if(number==(array[i]+array[j]+array[k]+array[l]))
                    {
                        printf("\nThe elements are : %d , %d , %d , %d",array[i],array[j],array[k],array[l]);
                        sum++;
                        goto out;
                    }
                }
            }
        }
    }
    out:
    if(sum==0)
    {
        printf("\nThere is no sum of element equal to the given number.");
    }
    return 0;
}

/*

output : 
Input the size of the array : 10
Input the element of the array : 
element - [0] : 3
element - [1] : 7
element - [2] : 1
element - [3] : 9
element - [4] : 15
element - [5] : 14
element - [6] : 6
element - [7] : 2
element - [8] : 5
element - [9] : 7
The given array is : 3 7 1 9 15 14 6 2 5 7 
Input the number : 37

The elements are : 3 , 15 , 14 , 5

output : 2

PS F:\C-Program\ARRAYS> gcc -o output 78-fourelement.c
PS F:\C-Program\ARRAYS> ./output
Input the size of the array : 6
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
element - [5] : 6
The given array is : 1 2 3 4 5 6 
Input the number : 22

There is no sum of element equal to the given number.

*/