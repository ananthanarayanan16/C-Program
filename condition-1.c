//Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

void main()
{
	int num1,num2;
	printf("Tes Data : ");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	{
		printf("Number 1 and Number 2 are equal.");
	}
	else
	{
		printf("Number 1 and Number 2 are not equal.");
	}
}

/* OUTPUT:
Tes Data : 15 15
Number 1 and number 2 are equal.

Tes Data : 12 23
Number 1 and Number 2 are not equal.   */
	