#include <stdio.h>
 
union test1 {
    int x[10];
    char y;
} Test1;
 
struct test2{
    int x[10];
    char y;
}Test2;


int main()
{
    int size1 = sizeof(Test1);
    int size2 = sizeof(Test2);
 
    printf("Sizeof test1: %d\n", size1);
    printf("Sizeof test2: %d\n", size2);
    return 0;
}


/*

output : 

Sizeof test1: 40
Sizeof test2: 44

*/