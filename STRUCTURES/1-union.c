//Union

#include <stdio.h>
 
union un {
    int member1;
    char member2;
    float member3;
};
 
int main()
{
 
    union un var1;
 
    var1.member1 = 15;
 
    printf("The value stored in member1 = %d",
           var1.member1);
 
    return 0;
}

/*

output : 

The value stored in member1 = 15


*/