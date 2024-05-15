//pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=5,*b;
    printf("%d\n",a);
    printf("%x\n",&a);
    printf("%x\n",&b);
    b=&a;
    system("cls");
    printf("%x\n",&*b);
    printf("%d\n",*b);
    return 0;
}