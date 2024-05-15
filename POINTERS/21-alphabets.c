// //write a program in  C to print all alphabets using a  pointer.

#include <stdio.h>

int main() {
    char str,*ptr; 
    str='A';
    ptr = &str; 
    printf("The Alphabets are : \n");
    for (int i=1;i<=26;i++) {
        printf("%c ", *ptr);
        str++; 
    }
    printf("\n");
    return 0;
}

/*
output : 

The Alphabets are : 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 

*/