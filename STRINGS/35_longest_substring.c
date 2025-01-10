//  WRITE A C PROGRAM TO FIND THE LENGHT OF THE LONGEST SUBSTRING OF A GIEN STRING WITHOUT REPEATING CHARAACTERS.

#include<stdio.h>
#include<string.h>

void sub_string(char []);
int length(char []);

void main()
{
    char string[100];

    printf("Input a string : ");
    fgets(string, sizeof(string), stdin);

    sub_string(string);
}

int length(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void sub_string(char string[])
{
    int i, j, len, start, end, count = 1, max = 0, k = 0;
    char str[100];

    len = length(string);
    for(i = 0; i <  len; i++)
    {
        j = i + 1;
        if(string[i] != string[j])
        {
            count++;
        }
        else
        {
            if(max < count)
            {
                start = k;
                end = j;
            }
            k = 0;
            i = j - 1;
            count = 1;
        }
    }
    for(i = start; i < end; i++)
    {
        j = 0;
        str[j] =  string[i];
        j++;
    }
    str[j] = '\0';

    printf("The lengest sub string without repearting characters : %s", str);
}