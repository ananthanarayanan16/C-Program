// Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
#include<string.h>

// DECLARATION FUNCTION

void largest(char []);

void smallest(char []);

// MAIN FUNCTION

void main()
{
    char string[100];

    printf("Enter the string : ");
    fgets(string, sizeof(string), stdin);

    // FUNCTION CALLING

    largest(string);
    smallest(string);

    printf("\n in the string : %s", string);
}

// DEFINITION LARGEST() FUNCTION

void largest(char str[])
{
    char large_string[50];
    int i, start, end, k, m = 0, max = 0, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        k = m;
        if((str[i] >= 'A' && str[i] <= 'Z') ||(str[i] >= 'a' && str[i] <= 'z'))
        {
            count++;
        }
        else if(max < count)
        {
            max = count;
            start = k;
            end = i;
            count = 0;
        }
        else
        {
            m = i+1;
            count = 0;
        }
    }
   
    k = 0;
    for(i = start; i <= end; i++)
    {
        large_string[k] = str[i];
        k++;
    }
    large_string[i] = '\0';

    printf("The largest word is %s.\n", large_string);
}

// DEFINITION SMALLEST() FUNCTION

 void smallest(char str[])
 {
    char small_string[30];
    int i, k, m = 0, count = 0, start, end, min = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        k = m;
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            count++;
        }
        // else if(min = 0)
        // {
        //     min = count;
        //     start = k;
        //     end = i;
        //     count = 0;
        // }
        else if(min > count)
        {
            min = count;
            start = k;
            end = i;
            count  = 0;
        }
        else
        {
            m = i+1;
            count = 0;
        }
    }
    k = 0;
    for(i = start; i <= end; i++)
    {
        small_string[k] = str[i];
        k++;
    }
    // small_string[i] = '\0';

    printf("The smallest word is '%s'.", small_string);
 }