//Bitwise right shift '>>' operator
#include<stdio.h>
int main()
{
	int x=10;
	int y=1;
	x=x>>y;
	printf("%d\n",x);
	y=2;
	x>>=y;
	printf("%d\n",x);
	y=3;
	x>>=y;
	printf("%d\n",x);
}