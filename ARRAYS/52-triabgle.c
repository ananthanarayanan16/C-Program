//write a program in C to count the number of triangles that can be formed from a given array.

#include<stdio.h>
int main()
{
    int i,j,side1,side2,side3,size,count=0,sum;
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
    for(i=0;i<size;i++)
    {
        sum=1;
        start:
        side1=array[i];
        side2=array[i+sum];
        for(j=i+1+sum;j<size;j++)
        {
            side3=array[j];
            if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1))
            {
                count++;
            }
        }
        if(sum+i<size-1)
        {
            sum++;
            goto start;
        }
    }
    printf("\nNumber of possible triangle can be formed from the array is : %d",count);
    return 0;
}

/*
output : 

Input the size of the array : 5
Input the element of the array : 
element - [0] : 6
element - [1] : 18
element - [2] : 9
element - [3] : 7
element - [4] : 10
The given array is : 6 18 9 7 10 
Number of possible triangle can be formed from the array is : 5

*/