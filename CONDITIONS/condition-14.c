// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene

#include<stdio.h>
void main()
{
	int side1,side2,side3;
	printf("Test data  :  ");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2&&side1==side3&&side2==side3)
	{
		printf("This is Equilateral Triangle");
	}
	else if((side1!=side2&&side1!=side3&&side2!=side3))
	{
		printf("This is Scalence Triangle");
	}
	else
	{
		printf("This is Isosceles Triangle");
	}
}
/*OUTPUT:
Test data  :  12 12 12
This is Equilateral Triangle

Test data  :  12 12 23
This is Isosceles Triangle

Test data  :  12 23 34
This is Scalence Triangle	*/