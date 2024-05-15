//write a c program to make such a pattern  like a pyramid with a number which will repeat the number in the same row.

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter a number for rows : ");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        for(j=i;j<=num;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        i++;
    }
    return 0;
}
/*
output:
Enter a number for rows : 4
    1
   2 2
  3 3 3
 4 4 4 4
*/