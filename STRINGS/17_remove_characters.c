#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For isalpha() function

// FUNCTION DECLARATION
void remove_non_alphabets(char[]);

// MAIN FUNCTION
int main()
{
    char string[100];

    printf("Input the string: ");
    fgets(string, sizeof(string), stdin);

    // Remove the newline character from fgets input if present
    string[strcspn(string, "\n")] = '\0';

    remove_non_alphabets(string);

    printf("After removing characters except alphabets: %s\n", string);

    return 0;
}

// REMOVE FUNCTION DEFINITION
void remove_non_alphabets(char string[])
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (!isalpha(string[i]))  // If the character is not an alphabet
        {
            for (j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j + 1];
            }
            i--;  // Since the array shifts left, we need to decrement `i`
        }
    }
}
