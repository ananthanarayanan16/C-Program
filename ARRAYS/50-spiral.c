//Write a program in C to print a matrix in spiral form.

#include<stdio.h>
int main()
{
    int i,j,n,r,c,row,column,p,m,q;
    printf("Input the row size of 2D matrix : ");
    scanf("%d",&row);
    printf("Input the column size of 2D matrix : ");
    scanf("%d",&column);
    int matrix[row][column];
    printf("Input the element of 2D matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The gicven matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The spiral form of above matrix is : \n");
    m=0,n=0;
    start:
    r=m;
    for(i=r;i<column;i++)
    {
        printf("%d ",matrix[r][i]);
    }
    c=i-1;
    r++;
    if(r==c)
    {
        goto out;
    }
    for(int j=r;j<row;j++)
    {
        printf("%d ",matrix[j][c]);
    }
    r=j-1;
    c--;
    if(r==c)
    {
        goto out;
    }
    for(p=c;p>=n;p--)
    {
        printf("%d ",matrix[r][p]);
    }
    c=p+1;
    r--;
    printf("\n___%d  ____ %d    ",c,r);
    if(r==c)
    {
        goto out;
    }
    for(q=r;q>m;q--)
    {
        printf("%d ",&matrix[q][c]);
    }
    row--;
    column--;
    j++;
    n++;
    goto start;
    out:
    return 0;
}