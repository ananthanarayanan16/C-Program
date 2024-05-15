//structure

#include<stdio.h>
 struct mystr
 {
    int num;
    char letter;
 }s1;

 int main()
 {
    // struct mystr s1;
    s1.num=12;
    s1.letter='K';
    printf("My number : %d\n",s1.num);
    printf("My letter : %c\n",s1.letter);
    return 0;
 }

 /*
 output : 
 
 My number : 12
My letter : K

*/