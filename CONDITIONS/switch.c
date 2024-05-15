//SWITCH

#include<stdio.h>
void main()
{
	int x;
	printf("Enter a number (1-7) :  ");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("Monday.");
		break;
		case 2:
		printf("Tuesday.");
		break;
		case 3:
		printf("Wednesday.");
		break;
		default:
		printf("Invalid input.");
//		break;
		case 4:
		printf("Thursday.");
		break;
		case 5:
		printf("Friday.");
		break;
		case 6:
		printf("Saturday.");
		break;
		case 7:
		printf("Sunday.");
		break;
	}
	printf("\nProgram is finished.");
}

/*OUTPUT:
Enter a number (1-7) :  1
Monday.
Program is finished.

Enter a number (1-7) :  2
Tuesday.
Program is finished.

Enter a number (1-7) :  3
Wednesday.
Program is finished.

Enter a number (1-7) :  4
Thursday.
Program is finished.

Enter a number (1-7) :  5
Friday.
Program is finished.

Enter a number (1-7) :  6
Saturday.
Program is finished.

Enter a number (1-7) :  7
Sunday.
Program is finished.

Enter a number (1-7) :  8
Invalid input.
Program is finished.  */
