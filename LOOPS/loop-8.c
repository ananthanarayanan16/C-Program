//Write a C program to display the n terms of odd natural numbers and their sum

#include<stdio.h>
int main()
{
	int i,n,sum,odd;
	printf("Input number of terms  :  ");
	scanf("%d",&n);
	sum=0;
	odd=1;
	printf("The odd numbers are  :  ");
	i=1;
	while(i<=n)
	{
		printf("%d ",odd);
		sum=odd+sum;
		odd=odd+2;
		i++;
	}
	printf("\nThe sum of odd Natural Number upto %d terms  :  %d",n,sum);
	return 0;
}
/*OUTPUT:
Input number of terms  :  11
The odd numbers are  :  1 3 5 7 9 11 13 15 17 19 21
The sum of odd Natural Number upto 11 terms  :  121		*/