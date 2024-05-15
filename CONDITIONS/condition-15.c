//. Write a C program to check whether a triangle can be formed with the given values for the angles

#include<stdio.h>
void main()
{
	int side1,side2,side3;
	printf("Test data  : ");
	scanf("%d%d%d",&side1,&side2,&side3);
	if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1))
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("The triangle is not valid");
	}
}
/*OUTPUT:
Test data  : 12 12 12
The triangle is valid

Test data  : 40 55 65
The triangle is valid

Test data  : 12 12 34
The triangle is not valid	*/