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
    int i, j = 0, count = 0;
    int length = string_length(substring);

    printf("\nlength is : %d",length);
    for(i = 0; string[i] != '\n'; i++)
    {
        if(string[i] != ' ')
        {
            if((string[i] == substring[j]) && (j < length))
            {
                // count++;
                j++;
            }
            // else
            // {
                count++;
            // }
        }
        else if(count == length)
        {
            printf("\nCount : %d",count);
            printf("\nThe substring is exists in the string.\n");
            goto out;
        }
        else
        {
            j = 0;
            count = 0;
        }
    }
    out :
    if(count == 0 || count > length)
    {
        printf("\nThe substring is not exists in the string.\n");
    }
}


//  FIND STRING LENGTH FUNCTION

int string_length(char str[])
{
    int count = 0;
    
    for(int i = 0; str[i] != '\n' || '\0'; i++)
    {
        count++;
    }

    return count;
}