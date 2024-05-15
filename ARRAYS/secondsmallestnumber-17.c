//Write a program in C to find teh second smallest element in an array.

#include<stdio.h>
int main()
{
    int i,j,size,swap;
    printf("Input the size of array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array (value must be <9999) : \n",size);
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
            if(array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    printf("\nThe second smallest element in the array is : %d",array[1]);
    return 0;
}
/*output:
Input the size of array : 5
Input 5 elements in the array (value must be <9999) : 
element - 0 : 5
element - 1 : 6
element - 2 : 3
element - 3 : 7
element - 4 : 2

The second smallest element in the array is : 3
*/