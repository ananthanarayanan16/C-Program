//Write a C program to display the cube of the number up to an integer. 
        
#include<stdio.h>
int main()
{
	int n,i,cube;
	printf("Input number of terms  :  ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		cube=i*i*i;
		printf("Number is : %d and cube of the %d : %d\n",i,i,cube);
		i++;
	}
	return 0;
}
/*OUTPUT:
Input number of terms  :  6
Number is : 1 and cube of the 1 : 1
Number is : 2 and cube of the 2 : 8
Number is : 3 and cube of the 3 : 27
Number is : 4 and cube of the 4 : 64
Number is : 5 and cube of the 5 : 125
Number is : 6 and cube of the 6 : 216	*/