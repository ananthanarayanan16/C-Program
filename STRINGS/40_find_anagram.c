//  WRITE A PROGRAM IN C TO CHECK WHETHER TWO GIVEN STRINGS ARE AN ANAGRAM USING FUNCTION.

#include<stdio.h>
#include<string.h>

void anagram(char [], char []);
int length(char []);

void main()
{
    char str_1[50], str_2[50];

    printf("Enter the first string : ");
    fgets(str_1, sizeof(str_1), stdin);

    printf("Enter the second string : ");
    fgets(str_2, sizeof(str_2), stdin);

    anagram(str_1, str_2);
}

void anagram(char str_1[], char str_2[])
{
    int i, count = 0, len;

    for(i = 0; str_1[i] != '\0' && str_1[i] != '\n'; i++)
    {
        for(int j = 0; str_2[j] != '\0' && str_2[j] != '\n'; j++)
        {
            if(str_1[i] == str_2[j])
            {
                count++;
                break;
            }
        }
    }
    len = length(str_1);
    if(count == len)
    {
        printf("%s and %s are Anagram.\n",str_1, str_2);
    }
    else
    {
        printf("%s and %s are not Anagram.\n", str_1, str_2);
    }
}

int length(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count++;
    }

    return count;
}