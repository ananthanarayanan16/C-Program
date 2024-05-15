//write a program in c to display a pattern like a right angle triangle with a number

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

/*
output:
1
12
123
1234
*/