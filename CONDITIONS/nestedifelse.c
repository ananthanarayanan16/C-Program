//NESTED IF ESE

#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter x,y and z value  :  ");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		{
			printf("X is big.");
		}
		else
		{
			printf("Z is big.");
		}
	}
	else
	{
		if(y>z)
		{
			printf("Y is big.");
		}
		else
		{
			printf("Z is big.");
		}
	}
	printf("\nProgram is Finished.");
}

/*OUTPUT:
Enter x,y and z value  :  12 34 56
Z is big.
Program is Finished.   */