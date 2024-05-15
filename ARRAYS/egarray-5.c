//input and output array element using loops

#include<stdio.h>
int main()
{
    int mark[10];
    printf("Enter marks : \n");
    for(int i=0;i<10;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&mark[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",mark[i]);
    }
    return 0;
}
/*output:
Enter marks : 
Element 0 : 66
Element 1 : 77
Element 2 : 88
Element 3 : 99
Element 4 : 44
Element 5 : 55
Element 6 : 66
Element 7 : 88
Element 8 : 66
Element 9 : 88
66 77 88 99 44 55 66 88 66 88 
*/