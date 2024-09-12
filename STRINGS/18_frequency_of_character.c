//  WRITE A PROGRAM IN C TO FIND THE FREQUENCY  OF CHARACTERS.

#include<stdio.h>
#include<string.h>

int frequency(char [], char []);

void main()
{
    char string[100], frequency_character;
    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the character to find the frequency : ");
    scanf("%s",&frequency_character);
    printf("The frequency of %c is : %d",frequency_character, frequency(string, frequency_character));
}