//Subtraction of two numbers

#include<stdio.h>
float subtract();
void main()
{
    float sub;
    sub=subtract();
    printf("Answer is : %f",sub);
}
float subtract()
{
    float x,y;
    printf("Enter two number : ");
    scanf("%f%f",&x,&y);
    return (x-y);
}

/*

output : 

Enter two number : 43.8 23.4
Answer is : 20.400000

*/