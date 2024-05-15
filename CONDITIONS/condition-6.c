//Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include<stdio.h>
void main()
{
	int x;
	printf("Test data  :  ");
	scanf("%d",&x);
	if(x==0)
	{
		printf("The value of n = %d",0);
	}
	else if(x>0)
	{
		printf("The value of n = 1");
	}	
	else
	{
		printf("The value of n = -1");
	}
}

/* OUTPUT:
Test data  :  0
The value of n = 0

Test data  :  78
The value of n = 1

Test data  :  -34
The value of n = -1	*/