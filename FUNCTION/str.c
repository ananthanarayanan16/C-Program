#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[10];
    printf("Enter a string : ");
    scanf("%s", a);

    // Clearing the screen
    system("cls"); // For Windows
    // system("clear"); // For Unix/Linux

    printf("The given string is : %s", a);
    return 0;
}