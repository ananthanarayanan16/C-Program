//Write a program in C to add numbers using call by reference.

#include<stdio.h>
int addition(int *ptr_1,int *ptr_2)
{
    int sum;
    sum=*ptr_1 + *ptr_2;
    return sum;
}
int main()
{
    int num_1,num_2;
    printf("Input the first number : ");
    scanf("%d",&num_1);
    printf("Input the second number : ");
    scanf("%d",&num_2);
    printf("\nThe sum of %d and %d is : %d",num_1,num_2,addition(&num_1,&num_2));
    return 0;
}

/*

Output : 

Input the first number : 23
Input the second number : 23

The sum of 23 and 23 is : 46

*/