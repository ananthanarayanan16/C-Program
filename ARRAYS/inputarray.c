//Input and printing 

#include<stdio.h>
int main()
{
    int x[2][3];
    printf("Enter values for array a[2][3] : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Element : [%d][%d] : ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nResultant array a[2][3] : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a[%d][%d] = %d\n",i,j,x[i][j]);
        }
    }
    return 0;
}
/*output:
Enter values for array a[2][3] : 
Element : [0][0] : 1
Element : [0][1] : 2
Element : [0][2] : 3
Element : [1][0] : 4
Element : [1][1] : 5
Element : [1][2] : 6

Resultant array a[2][3] : 
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
*/