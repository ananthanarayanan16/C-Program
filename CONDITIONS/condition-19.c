//Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be     captured from the keyboard to display the total amount to be paid to the customer

#include<stdio.h>
void main()
{
	int id,unit;
	float charge,amount;
	printf("Test data  :  ");
	scanf("%d",&id);
	printf("James");
	scanf("%d",&unit);
	printf("\nCustomer IDNO  :  %d",id);
	printf("\nCustomer Name  :  James");
	printf("\nUnit consumed  :  %d\n",unit);
	if(unit<=199)
	{
		charge=unit*1.20;
		printf("Amount charge @1.20 per unit  : %.2f",charge);
	}
	else if((unit>=200)&&(unit<400))
	{
		charge=unit*1.50;
		printf("Amount charge @1.50 per unit  : %.f",charge);
	}
	else if((unit>=400)&&(unit<600))
	{
		charge=unit*1.80;
		printf("Amount charge @1.80 per unit  : %.2f",charge);
	}
	else
	{
		charge=unit*2.00;
		printf("Amount charge @2.00 per unit  : %.2f",charge);
	}
	amount=(15*charge)/100;
	if(charge>400)
	{
		if(amount>100)
		{
		printf("\nSurcharge Amount : %.2f",amount);
		amount=charge+amount;
		printf("\nNet amount paid By customer : %.2f",amount);
		}
		else
		{
		printf("\nSurcharge Amount : 100");
		amount=charge+100;
		printf("\nNet Amount paid By customer : %.2f",amount);
		}
	}
	else
	{
		printf("\nNet amount paid by customer : %.2f",charge);
	}
}
 /*OUTPUT:
Test data  :  1001
James
800
Customer IDNO  :  1001
Customer Name  :  James
Unit consumed  :  800
Amount charge @2.00 per unit  : 1600.00
Surcharge Amount : 240.00
Net amount paid By customer : 1840.00	*/