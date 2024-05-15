//Check whether given number is even or odd until this program run to click exit , using goto statement .

#include<stdio.h>
int main()
{
    int num,two=2,n;
    go:
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%two == 0)
    {
        printf("Entered number %d  is even .\n",num);
    }
    else
    {
        printf("Entered number %d is odd .\n",num);
    }
    printf("Exit to click 1 , or Run again to click any number : ");
    scanf("%d",&n);
    if(n!=1)
    {
        goto go;
    }
    else
    {
        printf("\nProgram terminated successfully . ");
    }
    return 0;
}
/*
output:
Enter the number : 5
Entered number 5 is odd .
Exit to click 1 , or Run again to click any number : 0
Enter the number : 2
Entered number 2  is even .
Exit to click 1 , or Run again to click any number : 1

Program terminated successfully .
*/