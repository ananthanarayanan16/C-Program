// Write a C program to compute the sum of the first 10 natural numbers.
       
#include<stdio.h>
void main()
{
	int a=1,sum=0;
	while(a<=10)
	{
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}
	printf("The sum is : %d",sum);
}
/*OUTPUT:
1
2
3
4
5
6
7
8
9
10
The sum is : 55	*/