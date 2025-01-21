//  WRITE A PROGRAM IN C TO CHECK WHETHER TWO GIVEN STRINGS ARE AN ANAGRAM USING FUNCTION.

#include<stdio.h>
#include<string.h>

// FUNCTION DECLERATION

void anagram(char [], char []);
int length(char []);

// MAIN FUNCTION

void main()
{
    char str_1[50], str_2[50];

    printf("Enter the first string : ");
    fgets(str_1, sizeof(str_1), stdin);

    printf("Enter the second string : ");
    fgets(str_2, sizeof(str_2), stdin);

    anagram(str_1, str_2);
}

// ANAGRAM FUNCTION DEFINITATION

void anagram(char str_1[], char str_2[])
{
    int n, flag = 0, len_1, len_2, count_1 = 0, count_2 = 0;

    len_1 = length(str_1);
    len_2 = length(str_2);

    if(len_1 == len_2)
    {
        // FIND ANAGRAM TO COMPARE STRING CHARACTES

        for(int i = 0; i < len_1; i++)
        {
            for(int j = 0; str_1[j] != '\0' && str_1[j] != '\n'; j++)
            {
                if(str_2[i] == str_1[j])
                {
                    count_1++;
                    n = j;
                }
            }
            for(int k = 0; str_2[k] != '\0' && str_2[k] != '\n'; k++)
            {
                if(str_1[n] == str_2[k])
                {
                    count_2++;
                }
            }
            if(count_1 == count_2)
            {
                continue;
            }
            else
            {
                printf("The given strings are Not Anagram.\n");
                flag++;
                break;
            }
        }
       
    }
    else
    {
        printf("The given two string are Not Anagram.\n");
    }
    if(flag == 0)
    {
        printf("The given two strings are Anagram.\n");
    }
}

// FIND LENGTH OF THE STRINGS

int length(char str[])
{
    int i, count = 0;

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count++;
    }

    return count;
}


/*

output 1:

Enter the first string : spear
Enter the second string : pears
The given two strings are Anagram.

output 2:

Enter the first string : pss
Enter the second string : spp
The given strings are Not Anagram.

*/