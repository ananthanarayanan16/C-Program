//write a program in c to store element in an array and print them.

#include<stdio.h>
int main()
{
    int i,array[10];
    printf("Input 10 element in the array : \n");
    for(i=0;i<10;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("Elements in array are : ");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
/* output:
Input 10 element in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
element - 6 : 7
element - 7 : 8
element - 8 : 9
element - 9 : 0
Elements in array are : 1 2 3 4 5 6 7 8 9 0 
*/