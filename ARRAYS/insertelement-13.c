//Write a program in C to insert the valuesin the array.

#include<stdio.h>
int main()
{
    printf("Insert New value in the sorted array : \n");
    printf("______________________________________\n");
    int i,j,size,swap,num;
    printf("Input the size of the array : ");
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
    printf("The exist array list is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nAfter insert the array list is : \n");
    array[size]=num;
    for(i=0;i<=size;i++)
    {
        for(j=i+1;j<=size;j++)
        {
            if(array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
        }
        printf("%d ",array[i]);
    }
    return 0;
}

/*output:
Insert New value in the sorted array : 
______________________________________
Input the size of the array : 5
Input 5 elements in the array in ascending order : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 5
element - 4 : 6
Input the value to be inserted : 4
The exist array list is : 
1 2 3 5 6
After insert the array list is :
1 2 3 4 5 6
*/