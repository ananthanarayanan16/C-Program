//String comparisons

#include<string.h>
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Input the first string  : ");
    gets(str1);
    printf("Input the second string  : ");
    gets(str2);
    //The comprison function is compare using the ASCII value. 
    printf("\nThe comprisons function give : %d",strcmp(str1,str2));
    return 0;
}

/*

output : 1

Input the first string  : one 
Input the second string  : two

The comprisons function give : -1

output : 2

Input the first string  : two
Input the second string  : one

The comprisons function give : 1

output : 3

Input the first string  : one 
Input the second string  : one 

The comprisons function give : 1

*/