//Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below

#include<stdio.h>
void main()
{
	int temp;
	printf("Test Data  : ");
	scanf("%d",&temp);
	if(temp<=0)
	{
		printf("Freezing Weather");
	}
	else if(temp>=0&&temp<=10)
	{
		printf("Very Cold Weather");
	}
	else if(temp>=10&&temp<=20)
	{
		printf("Cold Weather");
	}
	else if(temp>=20&&temp<=30)
	{
		printf("Normal in Temperature");
	}
	else if(temp>=30&&temp<=40)
	{
		printf("Its Hot");
	}
	else
	{
		printf("Its Very Hot");
	}
}
/*OUTPUT:
Test Data  : 23
Normal in Temperature

Test Data  : 43
Its Very Hot	*/