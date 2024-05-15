// Write a C program to display n terms of natural numbers and their sum.
       
#include<stdio.h>
int main()
{
	int a,sum,n;f
	printf("Enter number of terms :  ");
	scanf("%d",&n);
	sum=0;
	printf("The first  %d natural number is  : \n",n);
	a=1;
	do
	{
		printf("%d\n",a);
		sum=sum+a;
		a++;
	}while(a<=n);
	printf("The Sum of Natural Number upto %d terms : %d",n,sum);
	return 0;
}
/*OUTPUT:
Enter number of terms  :  6
The first  6 natural number is  :
1
2
3
4
5
6
The Sum of Natural Number upto 6 terms : 21	*/