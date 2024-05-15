//Structure

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
    return 0;
}

/*

output : 

13 X some text

*/