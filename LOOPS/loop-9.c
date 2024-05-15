//write a program in c to display a pattern like a right angle triangle using an asterisk

#include<stdio.h>
int main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
}

/*
output :
*
** 
***
****
*****
*/

