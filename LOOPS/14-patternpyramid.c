//write a c program to make such a pattern as a pyramid with an asterisk.

#include<stdio.h>
int main()
{
    int i,j,row;
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
            printf("* ");
        }
        printf("\n");
        i++;
    }
    return 0;
}
/*
output:
Enter number of rows : 4
    *
   * *
  * * *
 * * * *
*/