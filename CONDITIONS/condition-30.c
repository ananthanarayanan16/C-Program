//Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days

#include<stdio.h>
void main()
{
	int year,month,day;
	printf("Input no of days  :  ");	
	scanf("%d",&day);
	year=day/365;
	printf("%d  Year(s)",year);
	year=day%365;
	month=year/30;
	printf("\n%d Month(s)",month);
	day=year%30;
	printf("\n%d Day(s)",day);
}
/*OUTPUT:
Input no of days  :  1234
3  Year(s)
4 Month(s)
19 Day(s)  		*/
