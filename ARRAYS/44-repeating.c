//Write a program in C to find the two repeating elements in the given array.

#include<stdio.h>
int main()
{
    int i,j,size,count;
    printf("Input the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : \n");
    for(i=0;i<size;i++)
    {
        printf("element - [%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("The given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe repeating elements are : ");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",array[i]);
        }
    }
    return 0;
}

/*
output : 

Input the size of the array : 5
Input the element of the array : 
element - [0] : 1
element - [1] : 2
element - [2] : 3
element - [3] : 3
element - [4] : 2
The given array is : 1 2 3 3 2   
The repeating elements are : 2 3 

*/


























































/*

  for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                // array[j]=0;
                count++;
            }
        }
        // array[i]=0;
        // printf("---%d---",count);
        if(count==1)
        {
            printf("%d ",array[i]);
        }
    }
 


  for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                repeat[j]=0;
            }
        }
        if(array[i]==repeat[i])
        {
            array[i]=count;
            if(array[i]/2!=0)
            {
                k++;
                if(l>=k)
                {
                    printf("%d ",repeat[i]);
                }
            }
        }
    }
   

 */