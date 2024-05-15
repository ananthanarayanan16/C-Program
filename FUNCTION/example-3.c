//Addition of two number

#include<stdio.h>
void add(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    add(x,y);
}

void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum is : %d",sum);
}

/*

output : 

Enter two numbers : 5 4
sum is : 9

*/