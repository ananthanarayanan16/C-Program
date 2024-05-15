//Write a program in C to find the maximum numbers between two numbers using a pointer.

#include<stdio.h>
int max(int *,int *);
int main()
{
    int num_1,num_2;
    printf("Input the first number : ");
    scanf("%d",&num_1);
    printf("Input the second number : ");
    scanf("%d",&num_2);
    printf("\n%d is the maximum number.",max(&num_1,&num_2));
    return 0;
}
int max(int *ptr_1,int *ptr_2)
{
    if(*ptr_1>*ptr_2)
    {
        return *ptr_1;
    }
    else
    {
        return *ptr_2;
    }
}

/*

output : 

Input the first number : 34
Input the second number : 43

43 is the maximum number.

*/