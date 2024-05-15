//Zero and one 

#include<stdio.h>
void print(int n,int m)
{
    for(int i=0;i<m;i++)
    {
        printf("%d ",n);
    }
    printf("\n");
}
void main()
{
    int row ,column ,i;
    printf("Input number of row : ");
    scanf("%d",&row);
    printf("Input number of column : ");
    scanf("%d",&column);
    printf("The matrix is  : \n");
    for(i=1;i<=row;i++)
    {
        if(i==row)
        {
            print(2,column);
        }
        else if(i % 2 == 0)
        {
            print(1,column);
        }
        else
        {
            print(0,column);
        }
    }
}

/*

output : 

Input number of row : 6
Input number of column : 5
The matrix is  : 
0 0 0 0 0 
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
2 2 2 2 2

*/