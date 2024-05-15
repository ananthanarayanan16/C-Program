//Write a program inC to accept two matrices and check whether they are equal.

#include<stdio.h>
int main()
{
    int i,j,row1,row2,column1,column2,count=0;
    printf("Input rows and columns of the 1st matix : ");
    scanf("%d%d",&row1,&column1);
    printf("Input rows and columns of the 2nd matrix : ");
    scanf("%d%d",&row2,&column2);
    int firstmatrix[row1][column1],secondmatrix[row2][column2];
    printf("Input elements in the first martix : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }
    }
    printf("Input elements in the second matrix : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&secondmatrix[i][j]);
        }
    }
    printf("The first matrix is : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("%d\t",firstmatrix[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d\t",secondmatrix[i][j]);
        }
        printf("\n");
    }
    printf("The matrices can be compared : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            if(firstmatrix[i][j]!=secondmatrix[i][j])
            {
                count++;
            }
        }
    }
    (count==0)?printf("Two martices are equal."):printf("Two matrices are not equal.");
    return 0;
}
/*output:
Input rows and columns of the 1st matix : 2 2
Input rows and columns of the 2nd matrix : 2 2
Input elements in the first martix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
The first matrix is : 
1       2
3       4
The second matrix is :
1       2
3       4
The matrices can be compared :
Two martices are equal.

Input rows and columns of the 1st matix : 3 3
Input rows and columns of the 2nd matrix : 3 3
Input elements in the first martix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Input elements in the second matrix : 
element - [0],[0] : 3
element - [0],[1] : 4
element - [0],[2] : 5
element - [1],[0] : 6
element - [1],[1] : 7
element - [1],[2] : 8
element - [2],[0] : 9
element - [2],[1] : 1
element - [2],[2] : 2
The first matrix is : 
1       2       3
4       5       6
7       8       9
The second matrix is :
3       4       5
6       7       8
9       1       2
The matrices can be compared :
Two matrices are not equal.
*/