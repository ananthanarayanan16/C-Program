//Write a program in C to add two number using pointers.

#include<stdio.h>
int main()
{
    int num_1,num_2,addition,*ptr_1,*ptr_2;
    ptr_1=&num_1;
    ptr_2=&num_2;
    printf("Input the first number : ");
    scanf("%d",ptr_1);
    printf("Input the second number : ");
    scanf("%d",ptr_2);
    addition=*ptr_1+*ptr_2;
    printf("The sum of %d and %d is : %d",*ptr_1,*ptr_2,addition);
    return 0;
}

/*

output : 

Input the first number : 12
Input the second number : 12
The sum of 12 and 12 is : 24

*/