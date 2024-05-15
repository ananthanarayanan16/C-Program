//IF ELSE

#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number  :  ");
	scanf("%d",&a);
	if(a==0)
	{
		printf("Given number is equal to zero");
	}
	else
	{
		printf("Given number is not equal to zero");
	}
}

/* OUTPUT :
Enter a number  :  90
Given number is not equal to zero

Enter a number  :  0
Given number is equal to zero   */