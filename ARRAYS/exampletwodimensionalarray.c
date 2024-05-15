//two dimensional array 

#include<stdio.h>
int main()
{
    int i=0,j=4,x[][4]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    for(i=0;i<j;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}