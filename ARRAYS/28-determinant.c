//Write a program in C to calculate the determinant of a 3 X 3 matrix.

#include<stdio.h>
int main()
{
    int matrix[3][3],determinant,i,j,a,b,c;
    printf("Input the element in the first matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    a=(matrix[1][1]*matrix[2][2])-(matrix[1][2]*matrix[2][1]);
    b=(matrix[1][0]*matrix[2][2])-(matrix[1][2]*matrix[2][0]);
    c=(matrix[1][0]*matrix[2][1])-(matrix[1][1]*(matrix[2][0]));
    a=a*matrix[0][0];
    b=b*matrix[0][1];
    c=c*matrix[0][2];
    determinant=a-b+c;
    printf("The matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("The determinant of the matrix is : %d",determinant);
    return 0;
}

/*
output : 1

Input the element in the first matrix : 
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : -1
element - [1],[0] : 0
element - [1],[1] : 0
element - [1],[2] : 1
element - [2],[0] : -1
element - [2],[1] : -1
element - [2],[2] : 0
The matrix is :   
1       0       -1
0       0       1
-1      -1      0
The determinant of the matrix is : 1

output : 2

Input the element in the first matrix : 
element - [0],[0] : 9
element - [0],[1] : 8
element - [0],[2] : 7
element - [1],[0] : 6
element - [1],[1] : 5
element - [1],[2] : 4
element - [2],[0] : 3
element - [2],[1] : 2
element - [2],[2] : 1
The matrix is : 
9       8       7
6       5       4
3       2       1
The determinant of the matrix is : 0

*/