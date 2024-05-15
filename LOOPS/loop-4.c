// Write a C program to read 10 numbers from the keyboard and find their sum and average

#include<stdio.h>
int main()
{
	int a,n,sum;
	float avg;
	printf("Input the 10 numbers  :\n");
	sum=0;
	for(a=1;a<=10;a++)
	{
		printf("\nNumber - %d :  ",a);
		scanf("%d",&n);
		sum=sum+n;
	}
	avg=(float)sum/10;
	printf("The sum of 10 numbers is  :  %d\n",sum);
	printf("The Average is  :  %f",avg);
	return 0;
}
/*OUTPUT:
Input the 10 numbers  :

Number - 1 :  1

Number - 2 :  2

Number - 3 :  3

Number - 4 :  4

Number - 5 :  5

Number - 6 :  6

Number - 7 :  7

Number - 8 :  8 

Number - 9 :  9

Number - 10 : 10
The sum of 10 numbers is  :  55
The Average is  :  5.500000		*/