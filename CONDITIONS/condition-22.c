//Write a program in C to read any digit and display it in the word.

#include<stdio.h>
void main()
{
	int x;
	printf("Test data  :  ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("One");
		break;
		case 2:
		printf("Two");
		break;
		case 3:
		printf("Three");
		break;
		case 4:
		printf("Four");
		break;
		case 5:
		printf("Five");
		break;
		case 6:
		printf("Six");
		break;		
		case 7:
		printf("Seven");
		break;
		case 8:
		printf("Eight");
		break;
		case 9:
		printf("Nine");
		break;
		case 0:
		printf("Zero");
		break;
		default:
		printf("Invalid input");
	}	
}
/*OUTPUT:
Test data  :  8
Eight

Test data  :  0
Zero

Test data  :  9
Nine	*/
