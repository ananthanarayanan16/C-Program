//Write a C program to check if the string is valid or not . The input string will be valid when open breacets and closed brackets are same type of brackets.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int length(char str[])
{
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    return l;
}
bool test(char *s, int len)
{
    int ctr=0,w=0,x=0,y=0,z=0;
    char *string;
    string = (char *)malloc(len*sizeof(char)); 

    while (*s != 0)
    {

        if(*s == '<')
        {
            w++;
            string[++ctr] = '>';
        }    
        if(*s == '(')
        {
            x++;
            string[++ctr] = ')'; 
        }

        if(*s == '[')
        {
            y++;
            string[++ctr] = ']'; 
        }

        if(*s == '{')
        {
            z++;
            string[++ctr] = '}';  
        }

        if(*s == '>')
        {
            if(string[ctr] == '>')
            {
                w--;
                ctr--;
            }
            else
            {
                free(string);
                return false;
            }
        }

        if (*s == ')')
        {
            if(string[ctr] == ')')
            {
                x--;
                ctr--;
            }
            else
            {
                free(string); 
                return false;
            }
        }
        if(*s == ']')
        {
            if(string[ctr] == ']')
            {
                y--;
                ctr--;
            } 
            else
            {
                free(string);
                return false;
            }
        }
        if(*s == '}')
        {
            if(string[ctr] == '}')
            {
                z--;
                ctr--;
            } 
            else
            {
                free(string);
                return false;
            }
        }
        s++;
    }

    free(string);   

    if(w > 0 || x > 0 || y > 0 || z > 0)
    {
         return false;

    }    
    return true;
}

int main()
{
    char string[80];
    int n;
    printf("Input a string: ");
    scanf("%s", string);
    n = length(string);
    printf("Check bracket in the said string is valid or not: %d", test(string, n));
    return 0;
}

/*
output : 1 

Input a string: <>(){}[]
Check whether brackets in the string are valid or not: 1

output : 2

Input a string: <({[]})>
Check whether brackets in the string are valid or not: 1

output : 3

Input a string: <>({[}])
Check whether brackets in the string are valid or not: 0


*/