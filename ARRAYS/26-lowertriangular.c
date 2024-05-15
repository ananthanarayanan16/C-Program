//Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Input the size of the square matrix : ");
    scanf("%d",&size);
    int matrix[size][size];
    printf("Input the element in the first matrix : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("elements - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is  : \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Setting zero in lower triangular matrix :  \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(j>=i)
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
/*output:
Input the size of the square matrix : 3
Input the element in the first matrix : 
elements - [0],[0] : 1
elements - [0],[1] : 2
elements - [0],[2] : 3
elements - [1],[0] : 4
elements - [1],[1] : 5
elements - [1],[2] : 6
elements - [2],[0] : 7
elements - [2],[1] : 8
elements - [2],[2] : 9
The matrix is  : 
1       2       3
4       5       6
7       8       9
Setting zero in lower triangular matrix :
1       2       3
0       5       6
0       0       9
*/