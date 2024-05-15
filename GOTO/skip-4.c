//Write a c program to skip the some statement in your program.

#include<stdio.h>
int main()
{
    int a,b,c;
    goto go;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition is : %d",c);
    go:
    printf("The program skip some statement .");
    return 0;
}
/*
outptu:
The program skip some statement 
*/