//Write a program in C to find the sum of the lower triangluar element of a matrix.

#include<stdio.h>
int main()
{
    int i,j,row,column,sum=0;
    printf("Input the row size of the matrix : ");
    scanf("%d",&row);
    printf("Input the column size of the matrix : ");
    scanf("%d",&column);
    int matrix[row][column];
    printf("Input the element of the matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The given matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The element being summed of the lower triangular matrix are : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i>j)
            {
                printf("%d ",matrix[i][j]);
                sum=sum+matrix[i][j];
            }
        }
    }
    printf("\nThe sum of the lower triangular matrix element are : %d",sum);
    return 0;
}

/*

output : 

Input the row size of the matrix : 3
Input the column size of the matrix : 3
Input the element of the matrix : 
element - [0][0] : 1
element - [0][1] : 2
element - [0][2] : 3
element - [1][0] : 4
element - [1][1] : 5
element - [1][2] : 6
element - [2][0] : 7
element - [2][1] : 8
element - [2][2] : 9
The given matrix is : 
1       2       3
4       5       6
7       8       9
The element being summed of the lower triangular matrix are : 4 7 8
The sum of the lower triangular matrix element are : 19


*/