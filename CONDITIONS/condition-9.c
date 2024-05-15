//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include<stdio.h>
void main()
{
	int x,y;
	printf("Test data  :  ");
	scanf("%d%d",&x,&y);
	if((x>0)&&(y>0))
	{
		printf("The coordinates points (%d,%d) lies in the first quadrant",x,y);
	}
	else if((x<0)&&(y>0))
	{
		printf("The coordinates points (%d,%d) lies in the second quadrant.",x,y);
	}
	else if((x<0)&&(y<0))
	{
		printf("The coordinates points (%d,%d) lies in the third quadrant.",x,y);
	}
	else
	{
		printf("The coordinates points (%d,%d) lies in the fourth quadrant.",x,y);
	}
}
/* OUTPUT:
Test data  :  5 7
The coordinates points (5,7) lies in the first quadrant

Test data  :  -1 -4
The coordinates points (-1,-4) lies in the third quadrant.	*/