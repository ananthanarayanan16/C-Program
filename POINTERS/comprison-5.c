//comprison of pointer of the same data type

#include<stdio.h>
void main()
{
    int a=15;
    int b=22;
    int c=15;
    int *num1=&a,*num2=&b,*num3=&c;
    if(*num1<*num2)
    {
        printf("%d less than  %d\n",*num1,*num2);
    }
    if(*num2>*num1)
    {
        printf("%d greater than %d\n",*num2,*num1);
    }
    if(*num1==*num3)
    {
        printf("%d equal to %d\n",*num1,*num3);
    }
    if(*num1!=*num2)
    {
        printf("%d not equal to %d\n",*num1,*num2);
    }
}

/*
output : 

15 less than  22
22 greater than 15        
15 equal to 15
15 not equal to 22  

*/