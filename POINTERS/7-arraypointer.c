//Write a program in C to store n element in an array and print the elements using a pointer.

#include<stdio.h>
void print(int,int []);
int main()
{
    int size;
    printf("Input the number of element to store in the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input %d number of element in the array : \n",size);
    for(int i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    print(size,array);
    return 0;
}
void print(int size,int array[])
{
    int i;//*ptr;
    // int* ptr=&array[0];
    int *ptr=array;
    printf("The element you entered are : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : %d\n",i,ptr[i]);
        // ptr++;
    }
}

/*

output : 

Input the number of element to store in the array : 5
Input 5 number of element in the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5
The element you entered are : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 4
element - [4] : 5


*/