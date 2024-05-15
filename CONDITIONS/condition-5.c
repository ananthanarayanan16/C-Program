//Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include<stdio.h>
void main()
{
	int age;
	printf("Test data : ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Congratulation ! You are eligible for casting your vote.");
	}
	else
	{
		printf("Sorry ! You are not eligible for casting your vote.");
	}
}

/* OUTPUT:

Test data : 23
Congratulation ! You are eligible for casting your vote.		*/