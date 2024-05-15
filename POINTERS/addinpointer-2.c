//Addition in pointer

#include<stdio.h>
void main()
{
    int a,*ptr;
    ptr=&a;
    printf("%u or %p\n",ptr,ptr);
    ptr=ptr+3;
    printf("\n%u or %p\n",ptr,ptr);
    ptr=ptr+2;
    printf("\n%u or %p\n",ptr,ptr);
}

/*
output : 

6422296 or 0061FF18
            //ptr+3 = 6422296 + (3*4(data type byte)) = 6422296 + 12 = 6422308 
6422308 or 0061FF24       
            //ptr+2 = 6422308 + (2*4(data type byte)) = 6422308 + 8 = 6422316
6422316 or 0061FF2C 

*/