//Write a program in c to sort the element of the array in descending order.

#include<stdio.h>
int main()
{
    int i,j,size,swap;
    printf("Input the size of array : ");
    scanf("%d",&size);
    printf("Input %d element in the array : \n",size);
    int array[size];
    for(i=0;i<size;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]<array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
    }
    printf("Elements of the array in sorted descending order : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
/*output:
Input the size of array : 4
Input 4 element in the array : 
element - 0 :23
element - 1 :12
element - 2 :22
element - 3 :5
Elements of the array in sorted descending order : 
23 22 12 5
*/