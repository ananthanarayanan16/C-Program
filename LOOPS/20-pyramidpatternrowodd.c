//write a c program to display the pattern as a pyramid using asterisk, with each row containing and odd number of asterisk.

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        for(j=i;j<=num;j++)
        {
            printf(" ");
        }
        for(j=1;j<i*2;j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}
/*
output:
Enter the number : 5
     *
    ***
   *****
  *******
 *********
 */

