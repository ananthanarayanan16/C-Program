// WRITE A C PROGRAM TO REVERSE ALL THE VOWELS PRESENT IN A GIVEN STRING. RETURN THE NEWLY CREATED STRING.

#include<stdio.h>
#include<string.h>

// FUNCTION DECLARATION 

int length(char []);
void vowels(char []);
void new_string(char [], char []);

// MAIN FUNCTION

void main()
{
   char string[100];

   printf("Enter a string : ");
   fgets(string, sizeof(string), stdin);

   vowels(string);
}

// LENGTH FUNCTION DEFINITION

int length(char str[])
{
   int len = 0;

   for(int i = 0; str[i] != '\n' || '\0'; i++)
   {
      len++;
   }

   return len;
}

// VOWELS FUNCTION DEFINITION

void vowels(char str_1[])
{
   char str_2[30];
   int len = length(str_1);
   
   for(int i = 0, j = 0; i <=len; i++)
   {
      if(str_1[i] == 'a' || str_1[i] == 'e' || str_1[i] == 'i' || str_1[i] == 'o' || str_1[i] == 'u' || str_1[i] == 'A' || str_1[i] == 'E' || str_1[i] == 'I' || str_1[i] == 'O' || str_1[i] == 'U')
      {
         str_2[j] = str_1[i];
         j++;
      }
      str_2[j] = '\0';
   }
   new_string(str_1, str_2);
   // printf("The string is : %s", str_2);
}

// NEW_STRING FUNCTION DEFINITION

void new_string(char str_1[], char str_2[])
{
   char new_str[50];
   int len_1, len_2;

   len_1 = length(str_1);
   len_2 = length(str_2);

   for(int i = 0; i <= len_1; i++)
   {
      if(str_1[i] == 'a' || str_1[i] == 'e' || str_1[i] == 'i' || str_1[i] == 'o' || str_1[i] == 'u' || str_1[i] == 'A' || str_1[i] == 'E' || str_1[i] == 'I' || str_1[i] == 'O' || str_1[i] == 'U')
      {
         new_str[i] == str_2[len_2];
         len_2--;
      }
      else
      {
         new_str[i] = str_1[i];
      }
   }
   printf("The given string : %s", new_str);
}