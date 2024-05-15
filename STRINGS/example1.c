//String

#include<stdio.h>
void main()
{
    int i,l;      //array[]={2,9,3,5,4,11,25,-7,0};
    char array[]={"anantha narayanan"};
    printf("The size of array is : %d",sizeof(array)/sizeof(array[0]));
    l=sizeof(array)/sizeof(array[0]);
    for(i=0;i<l;i++)
    {
        if(array[i]==32)
        {
            printf("\nSuccess...");
        }
    }
}