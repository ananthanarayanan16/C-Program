//Write a C program to calculate the root of a quadratic equation

#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,x1,x2,y1,y2;
	printf("Test data : ");
	scanf("%d%d%d",&a,&b,&c);
	y1=(b*b)-(4*a*c);
	if(y1>0)
	{
		y2=sqrt(y1);
		x1=(-b+y2)/2*a;
		x2=(-b-y2)/2*a;
		printf("\n%d,%d",x1,x2);
	}
	else
	{
		printf("\nRoot are imaginary .\nNo solution.");
	}
}
/*OUTPUT:
Test data : 1 2 3
Root are imaginary .
No solution.

Test data : 1 5 6
-2,-3	*/