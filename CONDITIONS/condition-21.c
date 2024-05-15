//Write a C program to read any day number in integer and display the day name in word format.

#include<stdio.h>
void main()
{
	int x;
	printf("Test data  :  ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:		
		printf("Monday");
		break;
		case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("Saturday");
		break;
		case 7:
		printf("Sunday");
		break;
		default:
		printf("Invalid input");
	}
}
/*OUTPUT:
Test data  :  2
Tuesday	

Test data  :  7
Sunday

Test data  :  10
Invalid input 	*/