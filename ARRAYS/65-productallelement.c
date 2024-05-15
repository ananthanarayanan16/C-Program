//Write a program in C to find the product of an array such that product is equal to the product of all th elements of the array[] except array[i].

#include<stdio.h>
int main()
{
    int i,j,size,product;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size],productarray[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<size;i++)
    {
        product=1;
        for(j=0;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                product=product*array[j];
            }
        }
        productarray[i]=product;
    }
    printf("\nThe product array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",productarray[i]);
    }
    return 0;
}

/*

output :

Input the size of the array : 6
Input the element of the array : 
1 2 3 4 5 6
The given array is : 1 2 3 4 5 6 
The product array is : 720 360 240 180 144 120

*/