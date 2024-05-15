//Write a C program which computes the area of various geometrical shapes using a menu-driven approach

#include<stdio.h>
void main()
{
	float z;
	int w,height,base,width,radius;
	printf("Option  :  \n");
	printf("1.Rectangle \n2.Triangle \n3.Circle");
	printf("\nEnter your option : ");
	scanf("%d",&w);
	switch(w)
	{
		case 1:
		printf("Enter the height : ");
		scanf("%d",&height);
		printf("Enter the width  :  ");
		scanf("%d",&width);
		z=height*width;
		printf("\nThe area is : %f",z);
		break;
		case 2:
		printf("Enter height and base  :  ");
		scanf("%d%d",&height,&base);
		z=(1*height*base)/2;
		printf("\nThe area is :  %f",z);
		break;
		case 3:
		printf("Enter the radius :  ");
		scanf("%d",&radius);
		z=3.14*radius*radius;
		printf("The area is  :  %f",z);
		break;
		default:
		printf("Invalid input");
	}
}
/*OUTPUT:
Option  :
1.Rectangle
2.Triangle
3.Circle
Enter your option : 3
Enter the radius :  4
The area is  :  50.240002	*/