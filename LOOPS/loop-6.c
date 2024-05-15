//Write a C program to display the multiplication table for a given integer.

#include<stdio.h>
int main()
{
	int i,n,m;
	printf("Input the number (Table to be calculated)  :  ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		m=i*n;
		printf("%d X %d = %d\n",n,i,m);
	}
	return 0;
}
/*OUTPUT:
Input the number (Table to be calculated)  :  5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50		*/