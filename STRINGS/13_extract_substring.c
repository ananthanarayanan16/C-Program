//  WRITE A PROGRAM IN C TO EXTRACT A SUBSTRING FROM A GIVEN SUBSTRING

#include<stdio.h>
#include<string.h>

//  FUNCTION DECLARATION

void substring(char [], int, int);
int length(char []);

//  MAIN FUNCTION

int main()
{
    char str[100];
    int position, length;

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Input the position to start extraction : ");
    scanf("%d",&position);
    printf("Input the length of substring : ");
    scanf("%d",&length);

    //  CALLING SUBSTRING FUNCTION

    substring(str, position-1, length);
}

//  SUBSTRING FUNCTION

void substring(char string[], int position, int len)
{
    char str[100];
    int i, string_length, j = 0;

    // CALLING LENGTH FUNCTION

    string_length = length(string);
    
    if(position > string_length)
    {
        printf("The given position is greater than the string length.");
    }
    else if((len + position) > string_length)
    {
        printf("\nThe given length is greater than the string length.");
    }
    else
    {
        for(i = position; i < (position + len); i++)
        {
            str[j] = string[i];
            j++;
        }
        str[j] = '\0';
        printf("\nThe substring retrive from the string is : \" %s \" \n",str);
    }
}

//  LENGTH FUNCTION

int length(char str[])
{
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

/*

output :

Input the string : This is test string
Input the position to start extraction : 9
Input the length of substring : 4

The substring retrive from the string is : " test " 

*/