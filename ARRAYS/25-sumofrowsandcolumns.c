//Write a program in C to find the sum of rows and columns of a matrix.

#include<stdio.h>
int main()
{
    int i,j,size,sum=0;
    printf("Input the size of the square matrix : ");
    scanf("%d",&size);
    int matrix[size][size];
    printf("Input elements of the first matrix :\n");
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
    printf("The sum of rows and columns of the matrix : \n");
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);
            sum=sum+matrix[i][j];
        }
        printf("%d",sum);
        printf("\n");
    }
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=0;j<size;j++)
        {
            sum=sum+matrix[j][i];
        }
        printf("%d\t",sum);
    }
    return 0;
}

/*output:
Input the size of the square matrix : 2
Input elements of the first matirx :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
The matrix is :
1       2
3       4
The sum of rows and columns of the matrix :
1       2       3
3       4       7
4       6

Input the size of the square matrix : 3
Input elements of the first matrix :
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
The sum of rows and columns of the matrix : 
1       2       3       6
4       5       6       15
7       8       9       24
12      15      18
*/