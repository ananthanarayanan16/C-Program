//Write a program in C for adding two matrix of the same size.

#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Input the size of the square martix (less than 5) : ");
    scanf("%d",&size);
    int firstmatrix[size][size],secondmatrix[size][size],add[size][size];
    printf("Input elements in first matrix : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }
    }
    printf("Input elements in second matrix : \n");
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
    printf("The second martix is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",secondmatrix[i][j]);
        }
        printf("\n");
    }
    printf("Addition of two matrix  is : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            add[i][j]=firstmatrix[i][j]+secondmatrix[i][j];
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*output:
Input the size of the square martix (less than 5) : 2
Input elements in first matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in second matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
The first matrix is : 
1       2
3       4
The second martix is :
1       2
3       4
Addition of two matrix  is :
2       4
6       8
*/