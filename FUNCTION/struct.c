//Strcture

#include<stdio.h>

struct pointer{
    int a,b;
};

int main()
{
    struct pointer p;
    printf("Enter two values : ");
    scanf("%d%d",&p.a,&p.b);
    printf("%d  %d",p.a,p.b);
    printf("I don't fucking here...");
    return 0;
}