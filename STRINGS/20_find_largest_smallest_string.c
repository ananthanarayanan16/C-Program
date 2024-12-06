// Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
#include<string.h>

// FUNCTION DECLARATION

void largest_word(char []);

void smallest_word(char []);

// MAIN FUNCTION

void main()
{
    char string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);

    // FUNCTION CALLING

    largest_word(string);

    smallest_word(string);

    printf("\nIn the string : %s", string);
}

// FUNCTION DEFINITION

// LARGEST WORD FUNCTION

void largest_word(char str[])
{
    int count = 0, max = 0, n = 0, start, end;

    for (int i = 0; str[i] != '\n'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            count++;
        }
        else if(max < count)
        {
            max = count;
            start  = n;
            end = i - 1;
            count = 0;
            n = i + 1;
        }
        else
        {
            count = 0;
            n = i + 1;
        }
    }
 
    char word[50];
    int k = 0;

    for (int i = start; i <= end; i++, k++)
    {
        word[k] = str[i];
    }
    word[k] = '\0';

    printf("\nThe largest word is : '%s'", word);
}

// SMALLEST WORD FUNCTION

void smallest_word(char str[])
{
    char count = 0, min = 0, n = 0, start, end;

    for(int i = 0; str[i] != '\n'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            count++;
        }
        else if(min == 0)
        {
            min = count;
            start = n;
            end = i - 1;
            count = 0;
            n = i + 1;
        }
        else if(min > count)
        {
            min = count;
            start = n;
            end = i -1;
            count = 0;
            n = i + 1;
        }
        else
        {
            count = 0;
            n = i + 1;
        }
    }

    char word[10];
    int k = 0;
    for(int i = start; i <= end; i++, k++)
    {
        word[k] = str[i];
    }
    word[k] = '\0';

    printf("\nThe smallest word is : '%s'", word);
}


/*

output 1:

Input the string : My name is Anantha Narayanan

The largest word is : 'Anantha'
The smallest word is : 'My'
In the string : My name is Anantha Narayanan

output 2:

Input the string : It is a string with smallest and largest word

The largest word is : 'smallest'
The smallest word is : 'a'
In the string : It is a string with smallest and largest word

*/