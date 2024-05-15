//Write a program in C to find the sum of the left diagnal of matrix.

#include<stdio.h>
int main()
{
    int i,j,size,add=0;
    printf("Input the size of the square matrix : ");
    scanf("%d",&size);
    int matrix[size][size];
    printf("Input elements in the first matrix : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matix is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0,j=size-1;i<size;i++,j--)
    {
        add=add+matrix[i][j];
    }
    printf("\nAddition of the left diagonal element is : %d",add);
    return 0;
}
/*
output:
Input the size of the square matrix : 3
Input elements in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
The matix is : 
1       2       3
4       5       6
7       8       9

Addition of the left diagonal element is : 15
*/