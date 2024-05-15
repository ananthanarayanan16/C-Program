#include<stdio.h>
void main()
{
    //A normal integer variable
    int var=10;
    //A pointer variable that holds address of var
    int *ptr=&var;
    printf("Value of var = %d\n",*ptr);
    printf("Address of var = %p\n",ptr);
    *ptr=20;//value at address is now 20
    printf("After doing *ptr = 20,*ptr is %d\n",*ptr);
    // printf("Value of var = %d\n",*ptr);
}

/*

Value of var = 10
Address of var = 0061FF18
After doing *ptr = 20,*ptr is 20

*/