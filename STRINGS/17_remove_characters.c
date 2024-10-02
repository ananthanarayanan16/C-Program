// WRITE A PROGRAM IN C TO REMOVE CHARACTER FROM A STRING EXCEPT ALPHABETS.

#include<stdio.h>

void delete(char []);

int main()
{
    char string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);


    delete(string);

    return 0;
}

void delete(char string[])
{
    int i,j;

    for(i = 0; string[i] != '\0'; i++)
    {
        if(!(string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            for(j = i; string[j] != '\0'; j++)
            {
                string[j] = string[j+1];
            }
            i--;
        }
    }

    printf("After remove charactes except alphabet : %s\n", string);
}


/*

output : 

Input the string : w3resourse.com
After remove charactes except alphabet : wresoursecom

*/