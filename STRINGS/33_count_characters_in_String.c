// Write a C program to count each character ina given string.

#include<stdio.h>
#include<string.h>

// DECALARING COUNT() FUNCTION

void count(char []);

// MAIN FUNCTION

void main()
{
    char str[100];

    printf("Input a string : ");
    fgets(str, sizeof(str), stdin);

    printf("The count of each character in the string : %s",str);

    printf("\nCharacters \t ASCII VALUE\tCOUNT \n");

    count(str);
}

// DEFINING COUNT() FUNCTION

void count(char str[])
{
    char s[100];
    int i, j, count, k, l = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(k = 0; k < l; k++)
        {
            if(str[i] == s[k])
            {
                goto last;
            }
        }
        for(j = i; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        s[l] = str[i];
        l++;
        printf("   '%c' \t   %d \t\t    %d\n", str[i], str[i], count);
        last:
    }
}


/*

output : 

nput a string : w3resouce
The count of each character in the string : w3resouce

Characters       ASCII VALUE    COUNT 
   'w'     119              1
   '3'     51               1
   'r'     114              1
   'e'     101              2
   's'     115              1
   'o'     111              1
   'u'     117              1
   'c'     99               1
   
   */