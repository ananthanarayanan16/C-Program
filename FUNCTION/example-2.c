//Addition if two numbers

#include<stdio.h>
float add(int,int);
void main()
{
    int x,y,sum;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    sum=add(x,y);
    printf("The sum is : %d",sum);
}

float add (int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

/*
output : 

Enter two numbers : 45 5
The sum is : 50

*/
