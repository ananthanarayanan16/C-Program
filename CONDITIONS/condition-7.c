//Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
void main()
{
	int height;
	printf("Test data : ");
	scanf("%d",&height);
	if(height<150)
	{
		printf("The person is Dwarf.");
	}
	else if((height>150)&&(height<180))
	{
		printf("The person is Average.");
	}
	else
	{
		printf("The person is Tall.");
	}
}

/* OUTPUT:
Test data : 155
The person is Average.

Test data : 135
The person is Dwarf.		*/