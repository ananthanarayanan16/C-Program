//Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Input the size of the square marix : ");
    scanf("%d",&size);
    int matrix[size][size];
    printf("Input the elements in the first matrix : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Setting zero in upper triangular matrix \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(j<=i)
            {
                printf("%d\t",matrix[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
output : 
Input the size of the square marix : 3
Input the elements in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
The matrix is : 
1       2       3
4       5       6
7       8       9
Setting zero in upper triangular matrix
1       0       0
4       5       0
7       8       9
*/