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
    
    // char str[100];
    // int len = length(string);
    // // printf("string : %s. length : %d", string, len);
    // // int len = length(string);
    // int i, j, k, m = 0, count = 0, max = 0, start, end;

    // // // len = length(string);
    // // // printf("\nlength is : %d", len);

    // // for(i = len - 1; i >= 0; i--)
    // {
    //     k = len - 1;
    //     for(j = 0; j < len; j++)
    //     {
    //         // printf("I = %d ", i);
    //         if(j <= i)
    //         {
    //             if(string[k] == string[j])
    //             {
    //                 if(m == 0)
    //                 {
    //                     m = j;
    //                 }
    //                 if(j == i && k == m)
    //                 {
    //                     if(max < count)
    //                     {
    //                         max = count;
    //                         start = m;
    //                         end = i;
    //                         count = 0;
    //                         // printf("\nmax = %d", max);
    //                     }
    //                 }
    //                 count++;
    //                 // printf("\ncount : %d", count);
    //                 k--;
    //                 // printf("\nk : %d", k);
    //             }
    //             else
    //             {
    //                 k = i;
    //                 count = 0;
    //                 m = 0;
    //             }
    //         }
    //     }
    // }
    // printf("\nStart : %d, end : %d\n", start, end);
    // // for(i = 10, j = 0; i <= 13; i++, j++)
    // // {
    // //     printf("String : %c\n", string[i]);
    // //     str[j] = string[i];
    // // }
    // // str[j] = '\0';
    // printf("palindrome : ");
    // for(i = start; i <= end; i++)
    // {
    //     printf("%c", string[i]);
    // }
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