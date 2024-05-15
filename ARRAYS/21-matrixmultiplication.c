//Write a program in C for the multiplication of two square matrices.

#include<stdio.h>
int main()
{
    int i,j,k,row1,row2,column1,column2;
    printf("Input the rows and columns of first matrix : ");
    scanf("%d%d",&row1,&column1);
    printf("Input the rows and column of second matrix : ");
    scanf("%d%d",&row2,&column2);
    int firstmatrix[row1][column1],secondmatrix[row2][column2],multi[row1][column1];
    if(column1 == row2)
    {
    printf("Input the elements in the first matrix : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }
    }
    printf("Input the elements in the second matrix : \n");
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
    printf("The second matrix  is : \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d\t",secondmatrix[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of two matrix is : \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<row1;j++)
        {
            multi[i][j]=0;
            for(k=0;k<column1;k++)
            {
                multi[i][j]=multi[i][j]+firstmatrix[i][k]*secondmatrix[k][j];
            }
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("\n The column of first matrix and row of the second matrix is not equal and the row of the first matrix and column of the second matrix is not equal. so cannot multiply the given matrices.");
    }
    return 0;
}
/*output:
Input the rows and columns of first matrix : 2 2
Input the rows and column of second matrix : 2 2
Input the elements in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input the elements in the second matrix : 
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
The first matrix is : 
1       2
3       4
The second matrix  is :
5       6
7       8
The multiplication of two matrix is :
19      22
43      50


Input the rows and columns of first matrix : 3 3
Input the rows and column of second matrix : 3 3
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
Input the elements in the second matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
The first matrix is : 
1       2       3
4       5       6
7       8       9
The second matrix  is :
1       2       3
4       5       6
7       8       9
The multiplication of two matrix is :
30      36      42
66      81      96
102     126     150

multiplication in non square matrix :

Input the rows and columns of first matrix : 2 3
Input the rows and column of second matrix : 3 2
Input the elements in the first matrix : 
element - [0],[0] : 1       
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
Input the elements in the second matrix : 
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
element - [2],[0] : 5
element - [2],[1] : 6
The first matrix is : 
1       2       3
4       5       6
The second matrix  is :
1       2
3       4
5       6
The multiplication of two matrix is :
22      28
49      64


output  : 


Input the rows and columns of first matrix : 3 4
Input the rows and column of second matrix : 3 4

The column of first matrix and row of the second matrix is not equal and the row of the first matrix and column onf the second matrix is not equal. so cannot multiply the given matrices.
 
 
 */