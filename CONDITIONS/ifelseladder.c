//IFELSE LADDER

#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter x and y value  :  ");
	scanf("%d%d",&x,&y);
	if(x<y)
	{
		printf("X is less than Y");
	}
	else if(x==y)
	{
		printf("X is equal to Y");
	}
	else if(x!=y)
	{
		printf("X is not equal to Y");
	}
	else
	{
		printf("X is greater than Y");
	}
	printf("\nProgram is finished.");
}
/* OUTPUT:
Enter x and y value  :  12 12
X is equal to Y
Program is finished.  */		



// #include<stdio.h>
// int main()
// {
// 	int x,y;
// 	printf("Enter two numbers : ");
// 	scanf("%d%d",&x,&y);
// 	if(x>y)
// 	{
// 		printf("X is greater than Y.\n");
// 	}
// 	else
// 	{
// 		printf("%d is greater than %d.\n",y,x);
// 	}
// 	return 0;
// }