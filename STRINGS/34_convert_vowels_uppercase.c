// Write a C progrm to convert vowels into uppercase character in a string.

#include<stdio.h>
#include<string.h>

// DECLARATION FUNCTION

void vowels(char []);

// MAIN FUNCTION

void main()
{
    char string[100];

    printf("Enter a string : ");
    fgets(string, sizeof(string), stdin);

    printf("The original string : %s", string);

    // FUNCTION CALLING

    vowels(string);
    // printf("After converting vowels into uppercase the sentence becomes : %s")
}

// DEFINING FUNCTION

void vowels(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("After converting vowels into uppercase the sentence become : %s", str);
}


/*

output : 

Enter a string : beyond the future
The original string : beyond the future
After converting vowels into uppercase the sentence become : bEyOnd thE fUtUrE

*/