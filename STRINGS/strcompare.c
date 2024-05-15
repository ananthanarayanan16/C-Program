//string compare

#include<stdio.h>
#include <string.h>
void main()
{
    char student1[20],student2[20];
    int n;
    printf("Enter the name 1 : ");
    scanf("%s",student1);
    printf("Enter the name 2 : ");
    scanf("%s",student2);
    n=strcmp(student1,student2);
    if(n==0)
    {
        printf("The name 1 %s and the name name 2 %s in same\n",student1,student2);
    }
    else
    {
        printf("The name 1 %s and the name name 2 %s in not same\n",student1,student2);
    }
}

/*

output : 

Enter the name 1 : string
Enter the name 2 : string 
The name 1 string and the name name 2 string in same

output : 

Enter the name 1 : string
Enter the name 2 : strings
The name 1 string and the name name 2 strings in not same

*/