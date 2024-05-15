//Write a program in c to print all unique elements in an array.

#include<stdio.h>
int main()
{
    int i,j,size,count=0;
    printf("Print all unique element of a array : \n");
    printf("_____________________________________\n");
    printf("Input the number of the elements to be stored in the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input %d elements in the array : \n",size);
    for(i=0;i<size;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("The unique element found in the array are : ");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(array[i]==array[j]&&i!=j)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",array[i]);
        }
    }
    return 0;
}

/*output:
Print all unique element of a array : 
_____________________________________
Input the number of the elements to be stored in the array : 5
Input 5 elements in the array : 
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 2
element - 4 : 1
The unique element found in the array are : 3 
*/