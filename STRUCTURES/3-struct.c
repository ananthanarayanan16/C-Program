//String in sturcture

#include<stdio.h>
#include<string.h>
struct mystruct
{
    int num;
    char string[40];
}s1;

int main()
{
    s1.num=10;
    strcpy(s1.string,"SAME TEXT");
    printf("MY string : %s",s1.string);
    return 0;
}
 
/*

output : 

MY string : SAME TEXT

*/