//Write a program in C  tp insert value in the array.

#include<stdio.h>
int main()
{
    int i,size,swap,num,position;
    printf("Input the size of array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array in ascending order : \n",size);
    int array[size];
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("Input the value to be inserted : ");
    scanf("%d",&num);
    printf("Input the position, where the value to be inserted : ");
    scanf("%d",&position);
    printf("The current list of array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nAfter insert the element the new array list is : \n");
    for(i=position-1;i<=size;i++)
    {
        if(i<position)
        {
            swap=array[i];
            array[i]=num;
            num=swap;
        }
        else
        {
            swap=array[i];
            array[i]=num;
            num=swap;
        }
    }
    for(i=0;i<=size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
/*output:
Input the size of array : 5
Input 5 elements in the array in ascending order : 
element - 0 : 1 
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the value to be inserted : 10
Input the position, where the value to be inserted : 5
The current list of array : 
1 2 3 4 5
After insert the element the new array list is :
1 2 3 4 10 5
*/                                                                                                                                