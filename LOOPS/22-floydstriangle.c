//write a program in c to print floyds triangle.

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        for(j=i;j>=1;j--)
        {
            (j%2==0)?printf("0"):printf("1");
        }
        printf("\n");
        i++;
    }
    return 0;
}

/*
output:
Enter a number : 5
1
01
101
0101
10101
*/