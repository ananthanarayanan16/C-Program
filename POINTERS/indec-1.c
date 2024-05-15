//Increment and decrement of a pointer
//Pointer address incremented / decremented depends on the pointer data type

#include<stdio.h>
void main()
{
    int a=10;
    int *b=&a;
    printf("Value of b is : %u or %p\n",b,b);
    for(int i=0;i<=1;i++)
    {
        printf(" %u or %p \n",b,b);
        b++;
    }
    printf("\n");
    for(int i=0;i<=1;i++)
    {
        printf(" %u or %p\n",b,b);
        b--;
    }
}

/*
output : 

Value of b is : 6422288 or 0061FF10
 6422288 or 0061FF10 
 6422292 or 0061FF14 

 6422296 or 0061FF18 
 6422292 or 0061FF14 
 
 */