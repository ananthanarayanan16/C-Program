//Write a program inC to accept two matrices and check whether they are equal.

#include<stdio.h>
int main()
{
    int i,j,row1,row2,columc1,column2,count=0;
    printf("Input rows and columns of the 1st matix : ");
    scanf("%d%d",&row1,&column1);
    printf("Input rows and columns of the 2nd matrix : ");
    scanf("%d%d",&row2,&column2);
    int firstmatrix[row1][column2],secondmatrix[row2][column2];
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
            if(firstmatrix[i][j]==secondmatrix[i][j])
            {
                count++;
                printf("Two matrices are not equal.");
            }
        }
    }
    if(count==0)
    {
        printf("Two matrices are equal.");
    }
    return 0;
}