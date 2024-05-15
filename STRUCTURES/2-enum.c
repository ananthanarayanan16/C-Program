 //ENUM

 #include<stdio.h>
enum level
{
    LOW=78,
    MEDIUM=90,
    HIGH=60
};
int main()
{
    enum level var =MEDIUM;
    printf("%d",var);
    return 0;
}

/*

output : 


90

*/