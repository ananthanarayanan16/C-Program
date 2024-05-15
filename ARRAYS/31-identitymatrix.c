//Write a program in C to check whether a given matrix is an indentity matrix.

#include<stdio.h>
int main()
{
    int i,j,row,column,count=0;
    printf("Input number of rows for the matrix : ");
    scanf("%d",&row);
    printf("Input number of column for the matrix : ");
    scanf("%d",&column);
    int matrix[row][column];
    printf("Input elements in the first matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
            if((i==j)&&(matrix[i][j]!=1))
            {
                count++;
            }
            if((i!=j)&&(matrix[i][j]!=0))
            {
                count++;
            }
        }
        printf("\n");
    }
    (count==0)?printf("The matrix is an identity matrix."):printf("The matrix is not identity matrix.");
    return 0;
}

/*
output 1:

Input number of rows for the matrix : 3
Input number of column for the matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
The matrix is : 
1       0       0
0       1       0
0       0       1
The matrix is an identity matrix.

output 2:

Input number of rows for the matrix : 3
Input number of column for the matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 1
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 1
element - [2],[2] : 1
The matrix is : 
1       0       1
0       1       0
0       1       1
The matrix is not identity matrix.
*/




/*sample

    int i,j,row,column,sum=0;
    printf("Input number of rows for the matrix : ");
    scanf("%d",&row);
    printf("Input number of column for the matrix : ");
    scanf("%d",&column);
    int matrix[row][column];
    printf("Input elements in the first matrix :\n");
    // printf("_____%d_____",++sum);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
            // if((matrix[i][j]!=1)||(matrix[i][j]!=0))
            // {
                // count++;
            // }  
        }
    }
    printf("%d\n",sum);
    printf("The matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
            if((i==j)&&(matrix[i][j]!=1))
            {
                sum++;
            }
            if((i!=j)&&(matrix[i][j]!=0))
            {
                sum++;
            }
        }
        printf("\n");
    }
    printf("%d\n",sum);
    (sum==0)?printf("The matrix is an identity matrix."):printf("The matrix is not identity matrix.");
    return 0;
*/