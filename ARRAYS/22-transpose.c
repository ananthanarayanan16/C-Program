//Write a program in C to find the tranpose of a given matrix.

#include<stdio.h>
int main()
{
    int i,j,row,column;
    printf("Input the rows and columns of the matrix : ");
    scanf("%d%d",&row,&column);
    int firstmatrix[row][column];
    printf("Input elements in the first matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }
    }
    printf("The first matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",firstmatrix[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of a matrix is  : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",firstmatrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
/*
return 0:
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
The first  matrix is : 
1       2
3       4
The transpose of a matrix is  :
1       3
2       4
*/