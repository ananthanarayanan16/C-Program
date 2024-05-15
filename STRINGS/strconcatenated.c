//String funftion

#include<stdio.h>
#include<string.h>
void main()
{
    char student1[20],student2[20];
    int n;
    printf("Enter the name 1 : ");
    scanf("%s",student1);
    printf("Enter the name 2 : ");
    scanf("%s",student2);
    strcat(student1,student2);
    printf("The concatenated string is %s \n",student1);
    printf("String 2 is %s\n",student2);
}

/*
output :

Enter the name 1 : anantha 
Enter the name 2 : narayanan
The concatenated string is ananthanarayanan 
String 2 is narayanan

*/