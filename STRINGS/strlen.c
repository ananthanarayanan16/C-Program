//string functio

#include <stdio.h>
#include <string.h>
void main()
{
    char student[20];
    int n;
    printf("Enter the name : \n");
    scanf("%s",student);
    n=strlen(student);
    printf("The number of letter in %s is %d\n",student,n);
}

/*

output : 

Enter the name : 
string
The number of letter in string is 6

*/