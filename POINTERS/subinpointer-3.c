//Pointer subraction 

#include<stdio.h>
void main()
{
    int a,*ptr;
    printf("Size of data type is : %u\n",sizeof(a));
    ptr=&a;
    printf("%u or %p \n",ptr,ptr);
    ptr=ptr-3;
    printf("\n%u or %p\n",ptr,ptr);
    ptr=ptr-2;
    printf("\n%u or %p\n",ptr,ptr);
}

/*
output : 

Size of data type is : 4
6422296 or 0061FF18 
                
6422284 or 0061FF0C

6422276 or 0061FF04

*/