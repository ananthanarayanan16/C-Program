//String copy

#include<stdio.h>
#include<string.h>
void main()
{
    char student[20],dummy[20];
    int n;
    printf("Enter the number : ");
    scanf("%s",student);
    strcpy(dummy,student);
    printf("The name in student : %s\nThe name in dummy : %s",student,dummy);
}

/*

output : 

Enter the number : string
The name in student : string
The name in dummy : string 

*/