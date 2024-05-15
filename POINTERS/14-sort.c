//write a program in C to sort an array using a pointer.

#include<stdio.h>
#include<stdlib.h>
// void sorting(int **,int);
void main()
{
    int size,swap,*ptr;
    printf("Input the number of element to store in the array : ");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory cannot allocated.");
    }
    else
    {
        printf("Memory allocated successfully.");
        printf("\nInput %d number of element in the array : \n",size);
        for(int i=1;i<=size;i++)
        {
            printf("element - %d :",i);
            scanf("%d",&ptr[i]);
        }
        for(int i=1;i<=size;i++)
        {
           for(int j=i+1;j<=size;j++)
            {
                if(ptr[i]>ptr[j])
                {
                    swap=ptr[i];
                    ptr[i]=ptr[j];
                    ptr[j]=swap;
                }
            }
        } 
        printf("\nThe element in the array is after sorting : \n");
        for(int i=1;i<=size;i++)
        {
            printf("element - %d : %d\n",i,ptr[i]);
        }
        free(ptr);
    }
}


/*
output : 

Input the number of element to store in the array : 5
Memory allocated successfully.
Input 5 number of element in the array : 
element - 1 :45
element - 2 :67
element - 3 :12
element - 4 :89
element - 5 :34

The element in the array is after sorting : 
element - 1 : 12
element - 2 : 34
element - 3 : 45
element - 4 : 67
element - 5 : 89

*/




























































// void sorting(int **ptr,int size)
// {
//     int swap;
//     for(int i=1;i<=size;i++)
//     {
//         for(int j=i+1;j<=size;j++)
//         {
//             if(*ptr[i]>*ptr[j])
//             {
//                 swap=(*ptr)[i];
//                 (*ptr)[i]=(*ptr)[j];
//                 (*ptr)[j]=swap;
//             }
//         }
//     }
//     for(int i=1;i<=size;i++)
//     {
//         printf("element - %d : %d\n",i,*ptr[i]);
//     }
// }