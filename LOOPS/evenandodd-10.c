//Write a program in c to seperate odd and even integers into seperate arrays.

#include<stdio.h>
int main()
{
    int i,j=0,k=0,size,even[j],odd[k];
    printf("Input the number of elements to be storde in the array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array : \n",size);
    int array[size];
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array);
        if(array[i]%2==0)
        {
            even[j]=array[i];
            j++;
        }
        else
        {
            odd[k]=array[i];
            k++;
        }
    }
    for(i=0;i<=j;i++)
    {
        printf("%d ",even[i]);
    }
    return 0;
}
