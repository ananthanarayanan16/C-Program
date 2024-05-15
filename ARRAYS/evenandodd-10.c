//Write a program in c to seperate odd and even integers into seperate arrays.

#include<stdio.h>
int main()
{
    int i,j=0,k=0,size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);
    printf("Input %d elements in the array : \n",size);
    int array[size],even[size],odd[size];
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
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
    printf("The even elements are : \n");
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nThe odd elements are : \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}

/*output:
Input the number of elements to be stored in the array : 6
Input 6 elements in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
The even elements are : 
2 4 6
The odd elements are :  
1 3 5
*/