//Create 2x2x2x2 dimentional array get an input from the user and print output.

#include<stdio.h>
int main()
{
    int i,j,k,l,array[2][2][2][2];
    printf("Input the element in the 4D array : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                for(l=0;l<2;l++)
                {
                    printf("element - [%d],[%d],[%d],[%d] : ",i,j,k,l);
                    scanf("%d",&array[i][j][k][l]);
                }
            }
        }
    }
    printf("\nThe given array element are : \n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                for(l=0;l<2;l++)
                {
                    printf("%d\t",array[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/*
output : 

Input the element in the 4D array : 
element - [0],[0],[0],[0] : 1
element - [0],[0],[0],[1] : 2
element - [0],[0],[1],[0] : 3
element - [0],[0],[1],[1] : 4
element - [0],[1],[0],[0] : 5
element - [0],[1],[0],[1] : 6
element - [0],[1],[1],[0] : 7
element - [0],[1],[1],[1] : 8
element - [1],[0],[0],[0] : 9
element - [1],[0],[0],[1] : 10
element - [1],[0],[1],[0] : 11
element - [1],[0],[1],[1] : 12
element - [1],[1],[0],[0] : 13
element - [1],[1],[0],[1] : 14
element - [1],[1],[1],[0] : 15
element - [1],[1],[1],[1] : 16

The given array element are : 

1       2
3       4

5       6
7       8


9       10
11      12

13      14
15      16

*/