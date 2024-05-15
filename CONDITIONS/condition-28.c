//Write a C program to convert specified days into years, weeks and days Note: Ignore leap year

#include<stdio.h>
void main()
{
	int a,year,week,day;
	printf("Number of days  : ");
	scanf("%d",&a);
	year=a/365;
	printf("\nYears  :  %d",year);
	year=a%365;
	week=year/7;
	printf("\nWeeks  :  %d",week);
	day=year%7;
	printf("\nDays : %d",day);
}
/*OUTPUT:
Number of days  : 1329

Years  :  3
Weeks  :  33
Days : 3	*/