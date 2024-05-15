#include<stdio.h>
void pointer()
{
    int var=20;
    //declare pointer variable
    int *ptr;
    //note the datatype of ptr and var musr be same
    ptr=&var;
    //assing the address of a variable to a pointer.
    printf("Value at ptr = %p\n",ptr);
    printf("value at var = %d\n",var);
    printf("value at *ptr = %d\n",*ptr);
}

int main()
{
    pointer();
    return 0;
}

/*
output : 

Value at ptr = 0061FF08
value at var = 20
value at *ptr = 20

*/