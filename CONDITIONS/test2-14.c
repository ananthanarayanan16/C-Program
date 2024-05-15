//test program
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the lenghts of fout side of a figure : ");;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a==b&&b==c&&c==d)
	{
	printf("It is a square.\n");
	}
	else if(a==b&&c==d)
	{
	printf("It is neither a square nor a rhombus\n");
	}
	else
	{
	printf("It is neither a square nor a rhombus\n");
	}
}