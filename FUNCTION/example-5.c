//Withput argument without return 

#include<stdio.h>
void subtract()
{
    int a,b;
    printf("Enter two values : ");
    scanf("%d%d",&a,&b);
    printf("Answer  is : %d\n",(a-b));
}
void main()
{
    subtract();
    subtract();
    subtract();
}

/*

output : 

Enter two values : 4
5
Answer  is : -1
Enter two values : 5
3
Answer  is : 2
Enter two values : 7
3
Answer  is : 4

*/
