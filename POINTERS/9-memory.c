//Write a program in C to find the largest element using Dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,max=0,*ptr;
    printf("Input number of element to be sotred : ");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory cannot be allocated.\n");
    }
    else
    {
        printf("Momory allocated successfully.\n");
        printf("Input %d element : \n",size);
        for(i=0;i<size;i++)
        {
            printf("Number %d : ",i);
            scanf("%d",&ptr[i]);
            if(max==0)
            {
                max=ptr[i];
            }
            else if(max<ptr[i])
            {
                max=ptr[i];
            }
        }
        printf("\nThe largest element is : %d",max);
    }
    free(ptr);
    return 0;
}

/*
output : 

Input number of element to be sotred : 5
Momory allocated successfully.
Input 5 element :
Number 0 : 12
Number 1 : 89
Number 2 : 56
Number 3 : 23
Number 4 : 68

The largest element is : 89

output : 

Input number of element to be sotred : 5
Momory allocated successfully.
Input 5 element :
Number 0 : -10
Number 1 : -5
Number 2 : -1
Number 3 : 2
Number 4 : -50

The largest element is : 2


output : 

Input number of element to be sotred : -1
Memory cannot be allocated.

*/