//write a program in c to make sich a pattern like a right angle triangle with a number which will repeat a number in a row

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",i);
            j++;
        }
        printf("\n");
    }
    return 0;
}
/*
output:
1
22
333
4444
*/