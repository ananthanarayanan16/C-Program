//User input in two dimensional array.

#include<stdio.h>
int main()
{
    int i,j,x[3][4];
    //i=row,j=colmn
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Element : [%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    return 0;
}
/*
output:
Element : [0][0] = 1
Element : [0][1] = 2
Element : [0][2] = 3
Element : [0][3] = 4
Element : [1][0] = 5
Element : [1][1] = 6
Element : [1][2] = 7
Element : [1][3] = 8
Element : [2][0] = 9
Element : [2][1] = 10
Element : [2][2] = 11
Element : [2][3] = 12
*/