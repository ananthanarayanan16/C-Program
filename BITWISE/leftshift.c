//Bitwise left shift '<<' operator
#include<stdio.h>
int main()
{
	int x=10;
	int y=1;
	x<<=y;
	printf("%d\n",x);
	y=2;
	x<<=y;
	printf("%d\n",x);
	y=3;
	x<<=y;
	printf("%d\n",x);
	return 0;
}
/*OUTPUT:
20
80
640
*/