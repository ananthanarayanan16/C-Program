//Write a program in C to find the median of two sorted arrays of the same size.

#include<stdio.h>
int main()
{
    int i,size1,size2,median,num;
    printf("Input the size of the first array : ");
    scanf("%d",&size1);
    printf("Input the size of the second array : ");
    scanf("%d",&size2);
    int firstarray[size1],secondarray[size2];
    printf("Input the element of the first array : \n");
    for(i=0;i<size1;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&firstarray[i]);
    }
    printf("Input the element of the second array : \n");
    for(i=0;i<size2;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&secondarray[i]);
    }
    printf("The given first array is : ");
    for(i=0;i<size1;i++)
    {
        printf("%d ",firstarray[i]);
    }
    printf("\nThe given second array is : ");
    for(i=0;i<size2;i++)
    {
        printf("%d ",secondarray[i]);
    }
    num=size1/2;
    if(size1%2==0)
    {
        median=(firstarray[num]+firstarray[num-1]+secondarray[num]+secondarray[num-1])/4;
    }
    else
    {
        median=(firstarray[num]+secondarray[num])/2;
    }
    printf("\nThe median of the 2 sorted array is : %d",median);
    return 0;
}

/*
output : 

Input the size of the first array : 5
Input the size of the second array : 5
Input the element of the first array : 
element - [0] : 1
element - [1] : 5
element - [2] : 13
element - [3] : 24
element - [4] : 35
Input the element of the second array : 
element - [0] : 3
element - [1] : 8
element - [2] : 15
element - [3] : 17
element - [4] : 32
The given first array is : 1 5 13 24 35 
The given second array is : 3 8 15 17 32
The median of the 2 sorted array is : 14

*/