//Write a program in c to find the prime number within a range of numbers.

#include<stdio.h>
int main()
{
    int i,j,start,end,t=0;
    printf("Input the starting number of range : ");
    scanf("%d",&start);
    printf("Input the ending number of range : ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        t=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                t++;
            }
        }
        if(t==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
/*
output 1 :
Input the starting number of range : 1
Input the ending number of range : 50
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 


output 2: 

Input the starting number of range : 50
Input the ending number of range : 150
53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 

*/