//Write a program in C to show the basic declaration of a pointer.

#include<stdio.h>
int main()
{
    int m,n,o,*z;
    printf("Pointer : show the basic declaration of pointer : \n");
    printf("__________________________________________________\n");
    printf("Input the value of m : ");
    scanf("%d",&m);
    printf("\nHere is m = %d , n, and o are two integer variable and *z is an integer.\n",m);
    z=&m;
    printf("\nz stores the address of m = %p\n",z);
    printf("*z stores the value of m = %d\n",*z);
    printf("&m stores the address of m = %p\n",&m);
    printf("&n stores the address of n = %p\n",&n);
    printf("&o stores the address of o = %p\n",&o);
    printf("&z stores the address of z = %p\n",&z);
    return 0;
}

/*
output : 

Pointer : show the basic declaration of pointer : 
__________________________________________________
Input the value of m : 12

Here is m = 12 , n, and o are two integer variable and *z is an integer.

z stores the address of m = 0061FF1C
*z stores the value of m = 12
&m stores the address of m = 0061FF1C
&n stores the address of n = 0061FF18
&o stores the address of o = 0061FF14
&z stores the address of z = 0061FF10
PS F:\C-Program\POINTERS> 

*/