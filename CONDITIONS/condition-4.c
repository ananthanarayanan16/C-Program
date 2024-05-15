//Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>

void main()
{
    int x;
    printf("Enter year : ");
    scanf("%d",&x);
    if((x%100==0)&&(x%400==0))
    {
        printf("Leap year");
    }
    else if(x%4==0&&x%100!=0)
    {
        printf("Leap year");
    }
    else
    {
        printf("not leap year");
    }
    
}

/*OUTPUT:

Enter year : 1800
not leap year

Enter year : 1804
Leap year		*/
