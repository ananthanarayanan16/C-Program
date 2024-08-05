//  WRITE A PROGRAM IN C TO FIND THE MAXIMUM NUMBER OF CHARACTER IN A STRING.

#include<stdio.h>
#include<string.h>

//  FUNCTION DECLARETION

int maximum(char []);

//  MAIN FUNCTION

void main()
{
    char str[500];

    printf("Input the string : ");
    fgets(str,sizeof(str),stdin);
    maximum(str);
}

//  MAXIMUM FUNCTION

int maximum(char str[])
{
    int i, j, count, frequency, max = 0;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for(j = i; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(max < count)
        {
            frequency = str[i];
            max = count;
        }
    }
    printf("\nThe highest frequency of character '%c' appears number of times : %d\n",frequency,max);
    return 0;
}


/*

output : 
Input the string : welcome to w3resource.com

The highest frequency of character 'e' appears number of times : 4

*/