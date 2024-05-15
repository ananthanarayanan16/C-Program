//write a c program to find the HCF to two numbers.

#include<stdio.h>
int main()
{
    int i,j,num1,num2,n,result;
    printf("Input 1st number for HCF : ");
    scanf("%d",&num1);
    printf("Input 2nd number for HCF : ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        n=num2;
    }
    else
    {
        n=num1;
    }
    for(i=1;i<=n;i++)
    {
        if(((num1%i)||(num2%i)) == 0)
        {
            result=i;
        }
    }
    printf("HCF of %d and %d is : %d",num1,num2,result);
    return 0;
}
/*output:
Input 1st number for HCF : 24
Input 2nd number for HCF : 36
HCF of 24 and 36 is : 12
*/