//To print first ten natural number using goto statement.

#include<stdio.h>
int main()
{
    int n=1;
    print:              //label
    printf("%d\n",n);
    n++;
    if(n<=10)
    {
        goto print;
    }
    return 0;
}
/*
output:
1
2 
3 
4 
5 
6 
7 
8 
9 
10
*/