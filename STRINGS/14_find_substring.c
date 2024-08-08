//  WRITE A C PROGRAM TO CHECK WHETHER A SUBSTRING IS PRESENT IN A STRING.

#include<stdio.h>
#include<string.h>

//  FUNCTION DECLERETION 

void substring_search(char [], char []);
int string_length(char []);

//  MAIN FUNCTION

int main()
{
    char string[100], search_string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);
    printf("Input the substring to be search : ");
    fgets(search_string, sizeof(search_string), stdin);

    //  CALLING SUBSTRING FUNCTION

    substring_search(string, search_string);
}

//  SUBSTRING SEARCH FUNCTION

void substring_search(char string[], char substring[])
{
    int i, j = 0, count_1 = 0, count_2 = 0;
    int length = string_length(substring);

    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] != ' ')
        {
            if((string[i] == substring[j]) && (j < length))
            {
                count_1++;
                j++;
            }
            else
            {
                count_2++;
            }
        }
        else if((count_1 == length) && (count_2 == 0))
        {
            printf("\nThe substring is exists in the string.\n");
            goto out;
        }
        else
        {
            j = 0;
            count_1 = 0;
            count_2 = 0;
        }
    }
    // if(count_1 == length && count_2 == 0)
    // {
        // printf("\nThe substring is exists in the string.\n");
    // }
    // else
    // {
        printf("\nThe substring is not exists in the string.\n");
    // }
    out :
}


//  FIND STRING LENGTH FUNCTION

int string_length(char str[])
{
    int count = 0;
    
    for(int i = 0; str[i] != '\n'; i++)
    {
        count++;
    }

    return count;
}

/*

output 1 :

Input the string : this is test string
Input the substring to be search : this

The substring is exists in the string.

output 2 :

Input the string : thisis test string
Input the substring to be search : this

The substring is not exists in the string.

*/