//struct

#include<stdio.h>
#include<string.h>
struct mystruct
{
    int num;
    char letter;
    char string[30];

};
int main()
{
    struct mystruct s1={13,'X',"some text"};
    printf("%d %c %s",s1.num,s1.letter,s1.string);
    struct mystruct s2=s1;
    strcpy(s2.string,"Something else");
    s2.num=80;

    printf("\n%d %c %s",s2.num,s2.letter,s2.string);
    return 0;
}


/*
output : 


PS F:\C-Program\STRUCTURES> ./output
13 X some text
80 X Something else


*/