#include<stdio.h>
int main()
{
    int var=5;
    printf("Var : %d\n",var);
    //Notice the use of & before var
    printf("Address of var : %p",&var);
    return 0;
}

/*
output : 

Var : 5
Address of var : 0061FF1C

*/