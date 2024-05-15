//Write a C program to find a given number is even or odd.

#include<stdio.h>
//Function declaration with parameter
int oddoreven(int);
void main()
{
    int n,flag;
    printf("Enter the number : ");
    scanf("%d",&n);
    //Function calling with argument 
    flag=oddoreven(n);
    if(flag==2)
    {
        printf("The given number is even.");
    }
    else
    {
        printf("The given number is odd");
    }
}

//Function definiton 

int oddoreven(int num)
{
    if(num%2==0)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

/*

Output : 

Enter the number : 3
The given number is odd

Enter the number : 66
The given number is even.

*/