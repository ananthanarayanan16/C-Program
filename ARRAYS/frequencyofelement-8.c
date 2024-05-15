//Write a program in c to count the ferquency of each element of an array.

#include<stdio.h>
int main()
{
    int i,j,k=0,swap,size,count=0;
    printf("Input the number of element to be stored in the array : ");
    scanf("%d",&size);
    printf("Input %d element in the array : \n",size);
    int array[size],array1[size];
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("The frequency of all elements of an array : \n");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<k;j++)
        {
            if(array[i]==array1[j])
            {
                goto last;
            }
        }
        for(j=i;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        array1[k]=array[i];
        k++;
        printf("\n%d occurs %d times",array[i],count);
        last:
        printf(" ");
    }    
    return 0;
}
/*
output:
Input the number of element to be stored in the array : 4
Input 4 element in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 1
element - 3 : 3
The frequency of all elements of an array :  
1 occurs 2 times
2 occurs 1 times
3 occurs 1 times


output : 2

Input 5 element in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 3
The frequency of all elements of an array : 

1 occurs 1 times
2 occurs 1 times
3 occurs 2 times
4 occurs 1 times

*/