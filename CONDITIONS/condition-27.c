//Write a C program to check whether a character is uppercase or lowercase alphabet

#include<stdio.h>
void main()
{
	char ch;
	printf("Input any one character  :  ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("The entered character %c is uppercase ",ch);
	}
	else if(ch>=97&&ch<=122)
	{
		printf("The entered character %c is lowercase ",ch);
	}
	else
	{
		printf("Invalid Input");
	}
}
/*OUTPUT:

Input any one character  :  a
The entered character a is lowercase
Input any one character  :  A
The entered character A is uppercase	*/
