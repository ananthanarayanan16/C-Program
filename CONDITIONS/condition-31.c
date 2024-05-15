//C program to count total number of notes in given amount.

#include<stdio.h>
void main()
{
	int fivehun,hundred,fifty,twenty,ten,five,two,one,n;
	printf("Input amount : ");
	scanf("%d",&n);
	if(n>=500)
	{
		fivehun=n/500;
		printf("\n500 : %d",fivehun);
	}
	else
	{	
		printf("\n500 : 0");
	}
	fivehun=n%500;
	if(fivehun>=100)
	{
		hundred=fivehun/100;
		printf("\n100 : %d",hundred);
	}
	else
	{
		printf("\n100 : 0");
	}
	hundred=fivehun%100;
	if(hundred>=50)
	{
		fifty=hundred/50;
		printf("\n50 : %d",fifty);
	}	
	else
	{
		printf("\n50 : 0");
	}
	fifty=hundred%50;
	if(fifty>=20)
	{
		twenty=fifty/20;
		printf("\n20 : %d",twenty);
	}
	else
	{
		printf("\n20 : 0");
	}
	twenty=fifty%20;
	if(twenty>=10)
	{
		ten=twenty/10;
		printf("\n10 : %d",ten);
	}
	else
	{
		printf("\n10 : 0");
	}
	ten=twenty%10;	
	if(ten>=5)
	{
		five=ten/5;
		printf("\n5 : %d",five);
	}	
	else
	{
		printf("\n5 : 0");
	}
	five=ten%5;
	if(five>=2)
	{
		two=five/2;
		printf("\n2 : %d",two);
	}
	else
	{
		printf("\n2 : 0");
	}
	two=five%2;
	if(two>=1)
	{
		one=two/1;
		printf("\n1 : %d",one);
	}
	else
	{
		printf("\n1 : 0");
	}
}
/*OUTPUT:
Input amount : 2333

500 : 4
100 : 3
50 : 0
20 : 1
10 : 1
5 : 0
2 : 1
1 : 1		*/