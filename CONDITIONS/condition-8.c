//Write a C program to find the largest of three numbers.
        
#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Test data :  ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("1st Number = %d,\t 2nd Number = %d,\t3rd Number = %d",n1,n2,n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n1st Number is the greatest among three.");
		}
		else
		{
			printf("\n3rd Number is the greatest among three.");
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("\n2nd Number is the greatest among three.");
		}
		else
		{
			printf("\n3rd Number is the greatest among three.");
		}
	}
}
/* OUTPUT:
Test data :  12 25 52
1st Number = 12,         2nd Number = 25,       3rd Number = 52
3rd Number is the greatest among three.		*/