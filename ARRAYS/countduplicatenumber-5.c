//Write a program in c to count the total number of duplicate element in an array.

#include<stdio.h>
int main()
{
    int i,j,size,count=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input %d elements in the array : \n",size);
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(i!='*')
        {
            for(j=i+1;j<size;j++)
            {
                if(array[i]==array[j])
                {
                    count++;
                    array[i]='*';
                }
            }            
        }
    }
    printf("The number of duplicate elements found in the array is : %d\n",count);
    return 0;
}

/*
output:
Input the number of elements to be stored in the array : 5
Input 5 elements in the array : 
element - 0 : 1
element - 1 : 3
element - 2 : 3
element - 3 : 1
element - 4 : 1
The number of duplicate elements found in the array is : 3
*/