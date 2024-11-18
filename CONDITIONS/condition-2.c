//Write a C program to check whether a given number is even or odd. 
       
#include<stdio.h>
void main()
{
	int x;
	printf("Test Data : ");
	scanf("%d", &x);
	if(x == 0)
	{
		printf("%d is not odd and even integer.",x);
	}
	else if(x % 2 == 0)
	{
		printf("%d is an even integer.",x);
	}
	else
	{
		printf("%d is an odd integer.",x);
	}
}
/*OUTPUT:

Test Data : 0
0 is not odd and even integer.

Test Data : 12
12 is an even integer. 	*/