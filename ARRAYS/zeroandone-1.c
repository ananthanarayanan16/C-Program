//Print zero and one

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
    int i,row,column;
    printf("Input number of row : ");
    scanf("%d",&row);
    printf("Input number of column : ");
    scanf("%d",&column);
    printf("The matrix is : \n");
    for(i=1;i<=row;i++)
    {
        if(i%2==0)
        {
            print(1,column);
        }
        else
        {
            print(0,column);
        }
    }
}