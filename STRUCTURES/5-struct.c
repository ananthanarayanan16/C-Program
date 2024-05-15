//structure

#include<stdio.h>

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
    printf("\n%d %c %s",s2.num,s2.letter,s2.string);
    return 0;
}
/*

outpu : 


13 X some text
13 X some text

*/