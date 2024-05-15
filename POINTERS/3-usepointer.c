//Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.

#include<stdio.h>
int main()
{
    int m,*n;
    float fx,*f;
    char cht,*ch;
    printf("Pointer : Demonstrate the use of & and * operator : \n");
    printf("____________________________________________________\n");
    printf("\nInput the value in character : ");
    scanf("%c",&cht);
    printf("Input the value in integer : ");
    scanf("%d",&m);
    // printf("Input the value in character : ");
    // scanf("%c",&cht);
    printf("Input the value in float : ");
    scanf("%f",&fx);
    printf("\nm = %d\nfx = %f\ncht = %c\n",m,fx,cht);
    printf("\nUsing & operator : \n");
    printf("__________________\n");
    printf("\nAddress of m = %p\n",&m);
    printf("Address of fx = %p\n",&fx);
    printf("Address of cht = %p\n",&cht);
    n=&m;
    f=&fx;
    ch=&cht;
    printf("\nUsing & and * operator : \n");
    printf("_________________________\n");
    printf("\nValue at address of m = %d\n",*n);
    printf("Value at address of fx = %f\n",*f);
    printf("Value at address of cht = %c\n",*ch);
    printf("\nUsing only pointer variable : \n");
    printf("________________________________\n");
    printf("\nAddress of m = %p\n",n);
    printf("Address of fx = %p\n",f);
    printf("Address of cht = %p\n",ch);
    printf("\nUsing only pointer operator : \n");
    printf("______________________________\n");
    printf("\nValue at address of m = %d\n",*n);
    printf("Value at address of fx = %f\n",*f);
    printf("Value at address of cht = %c\n",*ch);
    return 0;
}

/*

Output : 

Pointer : Demonstrate the use of & and * operator : 
____________________________________________________

Input the value in character : A
Input the value in integer : 5 
Input the value in float : 2.003345

m = 5        
fx = 2.003345
cht = A

Using & operator :
__________________

Address of m = 0061FF10
Address of fx = 0061FF0C
Address of cht = 0061FF0B

Using & and * operator :
_________________________

Value at address of m = 5
Value at address of fx = 2.003345
Value at address of cht = A

Using only pointer variable :
________________________________

Address of m = 0061FF10
Address of fx = 0061FF0C
Address of cht = 0061FF0B

Using only pointer operator :
______________________________

Value at address of m = 5
Value at address of fx = 2.003345
Value at address of cht = A

*/