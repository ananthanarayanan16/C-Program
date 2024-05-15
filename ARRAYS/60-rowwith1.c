//Write a program in C to find the row with the maximum numbers of 1s.

#include<stdio.h>
int main()
{
    int i,j,row,column,count=0,index=-1,sum=0;
    printf("Input the row of the 2D array : ");
    scanf("%d",&row);
    printf("Input the column of the 2D array : ");
    scanf("%d",&column);
    int array[row][column];
    printf("Input the element of 2D array :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("element - [%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The given array is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        count=0;
        for(j=0;j<column;j++)
        {
            if(array[i][j]==1)
            {
                count++;
            }
        }
        if(count>sum)
        {
            index=i;
            sum=count;
        }
    }
    printf("\nThe index of rwo with maximum 1s is : %d",index);
    return 0;
}

/*
Output :

Input the row of the 2D array : 5
Input the column of the 2D array : 5
Input the element of 2D array :
element - [0][0] : 0
element - [0][1] : 1
element - [0][2] : 0
element - [0][3] : 1
element - [0][4] : 1
element - [1][0] : 1
element - [1][1] : 1
element - [1][2] : 1
element - [1][3] : 1
element - [1][4] : 1
element - [2][0] : 1
element - [2][1] : 0
element - [2][2] : 0
element - [2][3] : 1
element - [2][4] : 0
element - [3][0] : 0
element - [3][1] : 0
element - [3][2] : 0
element - [3][3] : 0
element - [3][4] : 0
element - [4][0] : 1
element - [4][1] : 0
element - [4][2] : 0
element - [4][3] : 0
element - [4][4] : 1
The given array is : 
0       1       0       1       1
1       1       1       1       1
1       0       0       1       0
0       0       0       0       0
1       0       0       0       1

The index of rwo with maximum 1s is : 1


*/