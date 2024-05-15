//write a program in c to make such a patern like a right angle triangle with the number increased by 1.

#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=4;i++)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",a);
            a++;
            j++;
        }
        printf("\n");
    }
    return 0;
}
/*
output:
1
2 3   
4 5 6   
7 8 9 10
*/