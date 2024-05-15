//Call by value in function

#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a=15,b=25;
    printf("Before function c;alling. X = %d , Y = %d\n",a,b);
    swap(a,b);
    printf("After function calling. X = %d , Y = %d\n",a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

/*
output:

Before function c;alling. X = 15 , Y = 25
After function calling. X = 15 , Y = 25

*/