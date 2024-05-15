//Write a C program to display the multiplier table vertically from 1 to n. 

#include<stdio.h>
int main()
{
	int i,j,n,multi,m=0;
	printf("Input upto the table number starting form 1  :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=n;j++)
		{
			multi=j*i;
			printf("%d x %d = %d, ",j,i,multi);
		}
		printf("\b\b ");
		printf("\n");
	}
	return 0;
}
/*output:
Input upto the table number starting form 1  :  6
1 x 1 = 1, 2 x 1 = 2, 3 x 1 = 3, 4 x 1 = 4, 5 x 1 = 5, 6 x 1 = 6       
1 x 2 = 2, 2 x 2 = 4, 3 x 2 = 6, 4 x 2 = 8, 5 x 2 = 10, 6 x 2 = 12     
1 x 3 = 3, 2 x 3 = 6, 3 x 3 = 9, 4 x 3 = 12, 5 x 3 = 15, 6 x 3 = 18    
1 x 4 = 4, 2 x 4 = 8, 3 x 4 = 12, 4 x 4 = 16, 5 x 4 = 20, 6 x 4 = 24   
1 x 5 = 5, 2 x 5 = 10, 3 x 5 = 15, 4 x 5 = 20, 5 x 5 = 25, 6 x 5 = 30  
1 x 6 = 6, 2 x 6 = 12, 3 x 6 = 18, 4 x 6 = 24, 5 x 6 = 30, 6 x 6 = 36  
*/