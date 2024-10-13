//  WRITE A PROGRAM IN C TO READ FILE AND REMOVE THE SPACES BETWEEN TWO WORDS OF IT CONTENT.

#include<stdio.h>
#include<string.h>

//  FUNCTION DECLERETION

void space_remove(char []);

// MAIN FUNCTION

void main()
{
    char string[100];

    printf("The content of the file is : ");
    fgets(string, sizeof(string), stdin);

    printf("After removeing the spaces the content is : \n");

    // SPACE_REMOVE FUNCTION CALLING

    space_remove(string);
}

// FUNCTION DEFINITION

void space_remove(char str[])
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            for(j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j+1];
            }
        }
    }

    printf("%s", str);
}




/*

output : 

The content of the file is : The quick brown fox jumps over the lazy dog
After removeing the spaces the content is : 
Thequickbrownfoxjumpsoverthelazydog


*/