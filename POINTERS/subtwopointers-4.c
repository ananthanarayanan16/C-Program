//Subtraction of two pointers of the same data type 

#include<stdio.h>
void main()
{
    // long double a,b;
    // long double *ptr1,*ptr2;
    int a,b;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("\n%u or %p\n",ptr1,ptr1);
    printf("\n%u or %p\n",ptr2,ptr2);
    printf("\n%u or %p\n",ptr2-ptr1,ptr2-ptr1);
}

/*

output : 

6422272 or 0061FF00

6422256 or 0061FEF0   

1431655764 or 55555554

output : 

use int (data type)


6422292 or 0061FF14

6422288 or 0061FF10   

4294967295 or FFFFFFFF


*/