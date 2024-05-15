//write a program in c to display the number in reverse order.

#include<stdio.h>
int main()
{
    int n,m;
    printf("Input a number : ");
    scanf("%d",&n);
    printf("The number in reverse order is : ");
    while(n>0)
    {
        m=n%10;
        printf("%d",m);
        n=n/10;
    }
    return 0;
}
/*
output:
Input a number : 54321 
The number in reverse order is : 12345
*/