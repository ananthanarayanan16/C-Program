//Write a program in C to check whether an array is subset of another array.

#include<stdio.h>
int main()
{
    int i,j,count=0,size1,size2;
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
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(firstarray[i]==secondarray[j])
            {
                count++;
                break;
            }
        }
    }
    if(size1>size2)
    {
        if(count==size2)
        {
            printf("\nThe second array is the subset of the first array.");
        }
        else
        {
            printf("\nThe second array is not the subset of the first array.");
        }
    }
    else
    {
        if(count==size1)
        {
            printf("\nThe first array is the subset of the second array.");
        }
        else
        {
            printf("\nThe first array is not the subset of the second array.");
        }
    }
    return 0;
}

/*
output : 1

Input the size of the first array : 9
Input the size of the second array : 5
Input the element of the first array : 
element - [0] : 4
element - [1] : 8
element - [2] : 7
element - [3] : 11
element - [4] : 6
element - [5] : 9
element - [6] : 5
element - [7] : 0
Input the element of the second array :
element - [0] : 5
element - [1] : 4
element - [2] : 2
element - [3] : 0
element - [4] : 6
The given first array is : 4 8 7 11 6 9 5 0 2
The given second array is : 5 4 2 0 6
The second array is the subset of the first array.

output : 2

Input the size of the first array : 4                 
Input the size of the second array : 6
Input the element of the first array : 
element - [0] : 1
element - [1] : 4
element - [2] : 2
element - [3] : 3
Input the element of the second array : 
element - [0] : 6
element - [1] : 1
element - [2] : 5
element - [3] : 2
element - [4] : 4
element - [5] : 3
The given first array is : 1 4 2 3 
The given second array is : 6 1 5 2 4 3
The first array is the subset of the second array.

*/