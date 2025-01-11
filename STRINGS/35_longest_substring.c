//  WRITE A C PROGRAM TO FIND THE LENGHT OF THE LONGEST SUBSTRING OF A GIEN STRING WITHOUT REPEATING CHARAACTERS.

#include<stdio.h>
#include<string.h>

// FUNCTION DECLARATION

void sub_string(char []);
int length(char []);

// MAIN FUNCTION

void main()
{
    char string[100];

    printf("Input a string : ");
    fgets(string, sizeof(string), stdin);
   
    sub_string(string);
}

// FIND LENGTH OF GIVEN STRING

int length(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// FIND THE LONGEST SUB STRING

void sub_string(char string[])
{
    int i, j, len, start, end, count = 1, max = 0, k = -1, skip = 0;
    char str[100];

    len = length(string);

    for(i = 0; i <  len; i++)
    // for(i = 0; string[i] != '\0'; i++)
    {
        if(k == -1)
        {
            k = i;
        }
        if(string[i] != string[i + 1])
        {
            count++;
            // skip++;
        }
        else
        {
            if(max < count)
            {
                max = count;
                start = k;
                end = i;
            }
            k = -1;
            count = 1;
            // skip++;
        }
    }
    if(max == 0)
    {
        printf("The give string has no repeating characters.\n");
    }
    else
    {
        for(i = start, j = 0; i <= end; i++, j++)
        {
            str[j] =  string[i];
        }
        str[j] = '\0';

        printf("The longest sub string without repearting characters : %s\n", str);
    }
}

/*

output : 1
Input a string : abcdeffghiijkll
The longest sub string without repearting characters : abcdef

output : 2

Input a string : abcdf
The give string has no repeating characters.

*/