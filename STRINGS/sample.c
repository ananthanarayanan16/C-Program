//sizeof

#include<stdio.h>
void main()
{
    int i;
    char str[120];
    i=sizeof(str);///sizeof(str[0]);
    printf("  %d",i);   
    // printf("%lu", sizeof(str[120])/sizeof(str[0]));
}