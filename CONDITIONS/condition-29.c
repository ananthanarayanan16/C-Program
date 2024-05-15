//Write a C program to calculate the distance between two points

#include<stdio.h>
#include<math.h>
void main()
{
	int x1,x2,y1,y2;
	float z;
	printf("Input X1 : ");
	scanf("%d",&x1);
	printf("\nInput Y1 :  ");
	scanf("%d",&y1);
	printf("\nInput X2 :  ");
	scanf("%d",&x2);
	printf("\nInput Y2 :  ");
	scanf("%d",&y2);
	z=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("Distanw between the said points  :  %.4f",z);
}
/*OUTPUT:
Input X1 : 12

Input Y1 :  23

Input X2 :  34

Input Y2 :  45
Distanw between the said points  :  31.1127		*/	