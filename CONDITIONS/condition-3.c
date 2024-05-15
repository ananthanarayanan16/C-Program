//Write a C program to check whether a given number is positive or negative.
       
#include<stdio.h>
void main()
{
	int x;
	printf("Test data  :  ");
	scanf("%d",&x);
	if(x<0)
	{
		printf("%d is a Negative integer.",x);
	}
	else if(x==0)
	{
		printf("%d is not Positive and Negative integer.",x);
	}
	else 
	{
		printf("%d is a Positive integer.",x);
	}
}

/* OUTPUT:

Test data  :  0
0 is not a Positive and Negative integer.

Test data  :  -12
-12 is a Negative integer.

Test data  :  12
12 is a Positive integer.	*/