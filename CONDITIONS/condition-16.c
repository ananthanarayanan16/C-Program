//Write a C program to check whether a character is an alphabet, digit or special character

#include<stdio.h>
void main()
{
	char ch;
	printf("Test data : ");
	scanf("%c",&ch);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		printf("This is a Alphabet.");
	}
	else if(ch>=48&&ch<=57)
	{
		printf("This is a Digit");
	}
	else
	{
		printf("This is a Special character");
	}
}
/*OUTPUT:

Test data : 2
This is a Digit
Test data : @
This is a Special character
Test data : a
This is a Alphabet.	*/
