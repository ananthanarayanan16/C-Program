// WRITE A PROGRAM IN C TO FIND THE NUMBER OF TIMES A GIVEN WORD 'the' APPEARS IN THE GIVEN STRING.

#include <stdio.h>
#include <string.h>

//   FUNCTION DECLERETION

int word(char[], char[]);

void main()
{
    char string[100], substring[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the word to find number of times : ");
    fgets(substring, sizeof(substring), stdin);
    printf("The frequency %d of the word : %s\n",word(string, substring), substring);      //  FUNCTION CALLING
}

//   FUNCTION DEFINITION

int word(char string[], char substring[])
{
    int i, j, k, l, frequency = 0, string_count, substring_count = 0, length = 0;

    //   FIND THE LENGTH OF THE SUBSTRING

    for (i = 0; substring[i] != '\0'; i++)
    {
        length++;
    }

    for (i = 0; string[i] != '\0'; i++)
    {
        string_count = 0;
        for (j = i; string[j] != ' ' || '\0'; j++)
        {
            string_count++;
        }
        k = i, i = j;
        if (string_count == length - 1)
        {
            substring_count = 0, l = 0;
            for (j = k; j < k + string_count; j++)
            {
                if (string[j] == substring[l])
                {
                    substring_count++;
                    l++;
                }
                else
                {
                    break;
                }
            }
            if (substring_count == length - 1)
            {
                frequency++;
            }
        }
    }

    return frequency;       //   FUNCTION RETURNIING THE COUNT VALUE.
}

/*

output : 

Input the string : the string where the word the present more than once.
Input the word to find number of times : the
The frequency 3 of the word : the

*/