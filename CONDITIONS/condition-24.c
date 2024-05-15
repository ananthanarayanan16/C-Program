//Write a program in C to read any Month Number in integer and display the number of days for this month. Go to the editor

#include<stdio.h>
void main()
{
	int x;
	printf("Enter the month  :  ");
	scanf("%d",&x);
	if(x==2)
	{
		printf("Month have 28 days");
	}
	else if((x==4)||(x==6)||(x==9)||(x==11))
	{
		printf("Month have 30 days");
	}
	else if((x==1)||(x==3)||(x==5)||(x==7)||(x==8)||(x==10)||(x==12))
	{
		printf("Month have 31 days");	
	}
	else 
	{
		printf("Invalid Input.");
	}
}
/*OUTPUT:
Enter the month  :  12
Month have 31 days

Enter the month  :  7
Month have 31 days

Enter the month  :  2
Month have 28 days

Test data  :  6
Month have 30 days	*/