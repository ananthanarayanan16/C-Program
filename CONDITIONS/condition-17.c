//Write a C program to check whether an alphabet is a vowel or a consonant. 
        
#include<stdio.h>
void main()
{
	char ch;
	printf("Test data  : ");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("The alphabet is vowel.");
	}
	else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("The alphabet is consonant");
	}
	else
	{
		printf("Invalid Input.");
	}
}
/*OUTPUT:

Test data  : e
The alphabet is vowel.
Test data  : k
The alphabet is consonant
Test data  : E
The alphabet is vowel.	*/
