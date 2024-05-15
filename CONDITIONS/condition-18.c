//Write a C program to calculate profit and loss on a transaction. 
        
#include<stdio.h>
void main()
{
	int loss,profit,sp,cp;
	printf("Test data : ");
	scanf("%d%d",&cp,&sp);
	profit=sp-cp;
	loss=cp-sp;
	if(sp>cp)
	{
		printf("You can booked your profit amount : %d",profit);
	}
	else if(cp>sp)
	{
		printf("You can booked your loss amout : %d",loss);
	}
	else
	{
		printf("You have no profit and loss  .");
	}
}
/*OUTPUT:
Test data : 700 500
You can booked your profit amount : 200

Test data : 500 700
You can booked your loss amout : 200	*/
	