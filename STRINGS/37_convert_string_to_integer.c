// WRITE A C PROGRAM TO MULTIPLY TO POSITIVE NUMBER AS STRING. RETURN A STRING REPRESENTATION OF THE PRODUCT.

#include<stdio.h>
#include<string.h>

//  FUNCTION DECALARATION

int number(char []);
int string(int);

// MAIN FUNCTION

void main()
{
    int num_1, num_2, res;
    char str_1[100], str_2[100];

    printf("Input the first string : ");
    fgets(str_1, sizeof(str_1), stdin);

    printf("Input the second string : ");
    fgets(str_2, sizeof(str_2), stdin);

    num_1 = number(str_1);
    // printf("Num = %d\n", num_1);

    num_2 = number(str_2);

    // printf("Num = %d\n", num_2);

    res = num_1 * num_2;
    // printf("Res = %d\n", result);
    string(res);
}

// DEFINITION FUNCTIONS

// CONVERTING STRING TO INTEGER

int number(char str[])
{
    int i, num = 0;

    // printf("String : %s\n", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            num = num * 10 + str[i] - 48;

            // printf("num = %d\n", num);
        }
    }
    // printf("Num  = %d\n", num);
    return num;
}

// CONVERTING INTEGER TO STRING

int string(int res)
{
    // printf("res = %d", res);

    int n, count = 0;
    char str[50];
    n = res;

    // printf("N = %d", n);

    while(n > 0)
    {
        n = n / 10;
        count++;
        // printf("count = %d\n", count);
    }

    for(int i = count - 1; i >= 0; i--)
    {
        // printf("res = %d\n", res);
        // printf("Res = %d\n", res % 10);
        str[i] = ('0' + (res % 10));
        res = res / 10;
        // printf("Str = %c\n", str[i]);
    }
    str[count] = '\0';
    printf("Multiple two said number represent as string : %s \n", str);

}

/*
output : 

Input the first string : 100
Input the second string : 15
Multiple two said number represent as string : 1500 

*/