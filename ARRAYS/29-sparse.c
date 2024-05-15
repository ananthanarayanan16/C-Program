//Write a program inC to accept a matrix and deternime whether it is a sparse matrix .

#include<stdio.h>
int main()
{
    int i,j,rows,columns,zero=0,number=0;
    printf("Input the number of rows of the matrix : ");
    scanf("%d",&rows);
    printf("Input the number of columns of the matrix : ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    printf("Input the elements in the first matrix : \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0)
            {
                zero++;
            }
            else
            {
                number++;
            }
        }
    }
    if(zero>number)
    {
        printf("The given matrix is sparse matrix.\n");
        printf("There are %d number of zeros in the matrix.",zero);
    }
    else
    {
        printf("The given matrix is not sparse a matrix.\n");
        printf("The are %d number of not zeros in the matrix.",number);
    }
    return 0;
}

/*output: 1
Input the number of rows of the matrix : 2
Input the number of columns of the matrix : 2
Input the elements in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 0
element - [1],[0] : 0
element - [1],[1] : 0
The given matrix is sparse matrix.        
There are 3 number of zeros in the matrix.

output : 2
Input the number of rows of the matrix : 3
Input the number of columns of the matrix : 3
Input the elements in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 0
element - [1],[2] : 1
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 0
The given matrix is sparse matrix.
There are 6 number of zeros in the matrix.
*/