//Write a program in C to accept a grade and declare the equivalent description 

#include<stdio.h>
void main()
{
	char ch;
	printf("Test Data  :  ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		printf("You  have chosen  :  Average");
		break;
		case 'E':
		printf("You have chosen  :  Excellent");
		break;
		case 'V':
		printf("You have chosen  :  Very Good");
		break;
		case 'G':
		printf("You have chosen  :  Good");
		break;
		case 'F':
		printf("You have chosen  :  Fail");
		break;
		default:
		printf("Invalid Input");
	}
}
/*OUTPUT:
Test Data  :  H
Invalid Input

Test Data  :  A
You  have chosen  :  Average	*/
