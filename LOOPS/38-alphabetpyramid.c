//write a c program to display the pyramid pattern using the alphabet.

#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Input the number of rows : ");
    scanf("%d",&row);
    for(i=65;i<65+row;i++)
    {
        for(j=i;j<65+row;j++)
        {
            printf("  ");
        }
        for(j=65;j<=i;j++)
        {
            printf("%c ",j);
        }
        for(j=i-1;j>=65;j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
/*
Output:
Input the number of rows : 4
        A 
      A B A
    A B C B A
  A B C D C B A
*/