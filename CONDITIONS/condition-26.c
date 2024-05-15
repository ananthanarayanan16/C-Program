//Write a program in C which is a Menu-Driven Program to perform a simple calculation

#include<stdio.h>
void main()
{
	int a,b,c,e;
	printf("Option  :  ");
	printf("\n1.Addition \n2.Subraction \n3.Multiplication \n4.Division \n");
	printf("Enter your option  : ");
	scanf("%d",&e);
	switch(e)
	{
		case 1:
		printf("Enter two numbers  :  ");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("\nAddiion is : %d",c);
		break;
		case 2:
		printf("Enter two numbers :  ");
		scanf("%d%d",&a,&b);
		c=a-b;
		printf("\nSubraction is  :  %d",c);
		break;
		case 3:
		printf("Enter two numbers  :  ");
		scanf("%d%d,&a,&b");
		c=a*b;
		printf("\nMultiplication is :  %d",c);
		break;
		case 4:
		printf("Enter two numbers :  ");
		scanf("%d%d",&a,&b);
		c=a/b;
		printf("\nDivision is :  %d",c);
		break;
		default:
		printf("Invalid input");
	}
}
/*OUTPUT:
Option  :
1.Addition
2.Subraction
3.Multiplication
4.Subraction
Enter your option  : 4
Enter two numbers :  23  23

Division is :  1	*/