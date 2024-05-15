//Structure 

#include<stdio.h>
struct mystr{
    int num;
    char letter;

}s1,s2;

int main()
{
    s1.num=10;
    s1.letter='A';
    s2.num=20;
    s2.letter='S';
    printf("my number : %d\n",s1.num);
    printf("mu letter : %d\n",s1.letter);
    
    printf("my number : %d\n",s2.num);
    printf("mu letter : %d\n",s2.letter);
}

/*
output  :

my number : 10
mu letter : 65
my number : 20
mu letter : 83

*/