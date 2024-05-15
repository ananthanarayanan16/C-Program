//Write a program in C to return only the unique rowsfrom a given array.

#include<stdio.h>
int main()
{
    int i,j,k,m=0,size,row,column,count=0;
    printf("Input the row size of the matrix : ");
    scanf("%d",&row);
    printf("Input the column size of the matrix : ");
    scanf("%d",&column);
    int matrix[row][column],matrix1[row];
    printf("Input the element of the matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }    
    printf("The given matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=i+1;j<column;j++)
        {
            count=0;
            for(k=0;k<column;k++)
            {
                if(matrix[i][k]==matrix[j][k])
                {
                    count++;
                }
            }
            if(count==column)
            {
                matrix1[m]=j;
                m++;
            }
        }
    }
    printf("\nThe unique rows of the given matrix are : \n");
    for(i=0;i<row;i++)
    {
        for(k=0;k<m;k++)
        {
            if(i==matrix1[k])
            {
                i++;
            }
        }
        if(i>row-1)
        {
            break;
        }
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*

output : 

Input the row size of the matrix : 3
Input the column size of the matrix : 3
Input the element of the matrix : 
element - [0][0] : 1
element - [0][1] : 0
element - [0][2] : 1
element - [1][0] : 0
element - [1][1] : 1
element - [1][2] : 1
element - [2][0] : 1
element - [2][1] : 0 
element - [2][2] : 1
The given matrix is : 
1       0       1
0       1       1
1       0       1

The unique rows of the given matrix are :
1       0       1
0       1       1

*/