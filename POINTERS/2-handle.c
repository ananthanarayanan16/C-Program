//Write a program in C to demonstrate how to handle pointer in a program.

#include<stdio.h>
int main()
{
    int *ab,m;
    printf("Input the value of m : ");
    scanf("%d",&m);
    printf("\nAddress of m : %p\n",&m);
    printf("value of m : %d\n",m);
    ab=&m;
    printf("\nNow ab is assigned with the address m.\n");
    printf("Address of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d\n",*ab);
    printf("\nAgain Input the value of m : ");
    scanf("%d",&m);
    printf("\nThe value of m assigned to %d now.\n",m);
    printf("Address of pointer ab : %p\n",ab);
    printf("content of pointer ab : %d\n",*ab);
    printf("\nInput the value of ab : ");
    scanf("%d",ab);
    printf("\nThe pointer variable ab is assigned with the value %d now.\n",*ab);
    printf("Address of m : %p\n",&m);
    printf("Value of m : %d",m);
    return 0;
}

/*
output : 

Input the value of m : 29

Address of m : 0061FF18
value of m : 29

Now ab is assigned with the address m.
Address of pointer ab : 0061FF18      
Content of pointer ab : 29

Again Input the value of m : 34

The value of m assigned to 34 now.
Address of pointer ab : 0061FF18
content of pointer ab : 34

Input the value of ab : 7

The pointer variable ab is assigned with the value 7 now.
Address of m : 0061FF18
Value of m : 7


*/