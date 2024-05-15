//Write a program in C for the subtraction of two matrices.

#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Input the size of the square matrix (less than 5) : ");
    scanf("%d",&size);
    int firstmatrix[size][size],secondmatrix[size][size],sub[size][size];
    printf("Input the elements in the first matrix : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("element -[%d],[%d] : ",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }
    }
    printf("Input the elements in the second matrix : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&secondmatrix[i][j]);
        }
    }
    printf("The first matrix is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",firstmatrix[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",secondmatrix[i][j]);
        }
        printf("\n");
    }
    printf("The subtraction of two matrix is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            sub[i][j]=firstmatrix[i][j]-secondmatrix[i][j];
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
output:
Input the size of the square matrix (less than 5) : 2
Input the elements in the first matrix : 
element -[0],[0] : 5
element -[0],[1] : 6
element -[1],[0] : 7
element -[1],[1] : 8
Input the elements in the second matrix : 
element - [0],[0] : 4
element - [0],[1] : 3
element - [1],[0] : 2
element - [1],[1] : 1
The first matrix is : 
5       6
7       8
The second matrix is :
4       3
2       1
The subtraction of two matrix is :
1       3
5       7
*/