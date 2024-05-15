//Write a program in c to display pattern like a dismond.

#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            printf("  ");
        }
        for(j=1;j<i*2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=num-1;i>=1;i--)
    {
        for(j=i;j<=num;j++)
        {
            printf("  ");
        }
        for(j=1;j<i*2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
Output 1:
Enter a number : 5
          * 
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
    * * * * * * * 
      * * * * *
        * * *
          *


output 2:


Enter a number : 10
                    * 
                  * * *
                * * * * * 
              * * * * * * *
            * * * * * * * * *
          * * * * * * * * * * *
        * * * * * * * * * * * * *
      * * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * * *
    * * * * * * * * * * * * * * * * * 
      * * * * * * * * * * * * * * * 
        * * * * * * * * * * * * *
          * * * * * * * * * * * 
            * * * * * * * * *
              * * * * * * *
                * * * * * 
                  * * * 
                    * 
*/