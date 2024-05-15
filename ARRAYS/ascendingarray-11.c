//Write a program in c to sort elements of an array in ascending order.

#include<stdio.h>
int main()
{
    int i,j,size,swap;
    printf("Input the size of array :  ");
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
            if(array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    printf("Elements of array in sorted ascending order : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
/*output:
Input the size of array :  5
Input 5 elements in the array : 
element - 0 : 7
element - 1 : 6
element - 2 : 4
element - 3 : 9
element - 4 : 2
Elements of array in sorted ascending order : 
2 4 6 7 9
*/