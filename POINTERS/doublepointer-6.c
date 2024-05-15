//Pointer to pointer in C program

#include<stdio.h>
void main()
{
    int var=789;
    int *ptr1;
    int **ptr2;
    ptr1=&var;
    ptr2=&ptr1;
    printf("Value of var = %d\n",var);
    printf("Value of var using single pointer = %d\n",*ptr1);
    printf("Value of var using double pointer = %d\n",**ptr2);
    //Displaying address of var using both single pointer and double pointer

    printf("\nAddress of var = %p\n",&var);
    printf("Value of ptr1 = %p\n",ptr1);
    printf("Address of ptr1 = %p\n",&ptr1);
    printf("Value of ptr2 = %p\n",ptr2);
    printf("Address of ptr2 = %p\n",&ptr2);
    
}

/*
output : 


Value of var = 789
Value of var using single pointer = 789
Value of var using double pointer = 789

Address of var = 0061FF1C
Value of ptr1 = 0061FF1C
Address of ptr1 = 0061FF18
Value of ptr2 = 0061FF18
Address of ptr2 = 0061FF14

*/