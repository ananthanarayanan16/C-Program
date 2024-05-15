//Write a program in C to demonstrate how a function return a pointer.

#include<stdio.h>
int large(int*,int*);
void main()
{
    int first ,second;
    printf("Input the first number : ");
    scanf("%d",&first);
    printf("Input the seconod number : ");
    scanf("%d",&second);
    printf("\nThe number %d is larger.",large(&first,&second));
}
int large(int *first,int *second)
{
    if(*first>*second)
    {
        return *first;
    }
    else
    {
        return *second;
    }
}

/*

output : 

Input the first number : 5
Input the seconod number : 6

The number 6 is larger.

*/