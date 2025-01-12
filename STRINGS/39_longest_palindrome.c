// WRITE A C PROGRAM TO FIND THE LONGEST PALINDROME SUBSTRING FROM A GIVE STRING.

#include<stdio.h>
#include<string.h>

void palindrome(char []);
int length(char []);

void main()
{
    char string[100];

    printf("Input the string : ");
    fgets(string, sizeof(string), stdin);

    palindrome(string);
}

void palindrome(char string[])
{
    char str[100];
    int len = length(string);
    // printf("string : %s. length : %d", string, len);
    // int len = length(string);
    int i, j, k, m = 0, count = 0, max = 0, start, end;

    // // len = length(string);
    // // printf("\nlength is : %d", len);

    for(i = len - 1; i >= 0; i++)
    {
        k = i;
        for(j = 0; j < len; j++)
        {
            if(j <= i)
            {
                if(string[k] == str[j])
                {
                    if(m == 0)
                    {
                        m = j;
                    }
                    if(j == i && k == m)
                    {
                        if(max < count)
                        {
                            max = count;
                            start = m;
                            end = i;
                        }
                    }
                    count++;
                    k--;
                }
                else
                {
                    k = i;
                    count = 0;
                    m = 0;
                }
            }
        }
    }
    // for(i = start, j = 0; i <= end; i++, j++)
    // {
    //     str[j] = string[i];
    // }
    // str[j] = '\0';
    // printf("palindrome : %s", str);
}

int length(char str[])
{
    int count = 0;

    printf("String : %s", str);
    for(int i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        count++;
    }
    printf("Count : %d", count);
    return count;
}