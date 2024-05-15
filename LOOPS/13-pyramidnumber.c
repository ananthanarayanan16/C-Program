//write a program in c make a pyramid pattern with numbers increased by 1.

#include<stdio.h>
int main()
{
    int i,j,a=1,row;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    i=1;
    while(i<=row)
    {
        for(j=i;j<=row;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
/*
output:
Enter number of rows :  4
    1     
   2 3    
  4 5 6   
 7 8 9 10 
*/