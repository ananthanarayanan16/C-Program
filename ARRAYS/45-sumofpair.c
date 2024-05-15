//Write a program in C to find the two elements whose sum is closest to zero.

#include<stdio.h>
int main()
{
    int i,j,negative,positive,final1,final2,size,sum,count=0;
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
    printf("\nThe pair of elements whose sum is minimum are : \n");
    negative=0,positive=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            sum=0;
            sum=array[i]+array[j];
            if(sum<0)
            {
                if(negative==0)
                {
                    negative=sum;
                }
                else
                {
                    if(sum>negative)
                    {
                        negative=sum;
                    }
                }
            }
            if(sum>0)
            {
                if(positive==0)
                {
                    positive=sum;
                }
                else
                {
                    if(sum<positive)
                    {
                        positive=sum;
                    }
                }
            }
        }
    }
    if((negative*-1)<positive)
    {
        final1=negative;
    }
    else if((negative*-1)==positive)
    {
        final1=negative;
        final2=positive;
        count++;
    }
    else
    {
        final1=positive;
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;i++)
        {
            if(count!=0)
            {
                if(final1==array[i]+array[j])
                {
                    printf("[ %d , %d ]  ",array[i],array[j]);
                }
                if(final2==array[i]+array[j])
                {
                    printf("[ %d , %d ]",array[i],array[j]);
                }
                break;
            }
            else
            {
                if(final1==array[i]+array[j]) 
                {
                    printf("[ %d , %d ]",array[i],array[j]);
                    break;
                }           

            }
        }
    }
    return 0;
}

/*

output : 1

Input the size of the array : 5 
Input the element of the array : 
element - [0] : 1
element - [1] : 3
element - [2] : 3
element - [3] : -4
element - [4] : 6
The given array is : 1 3 3 -4 6 
The pair of elements whose sum is minimum are :
[ -4 , 3 ]

output : 2

Input the size of the array : 10
Input the element of the array : 
element - [0] : 38
element - [1] : 44
element - [2] : 63
element - [3] : -51
element - [4] : -35
element - [5] : 19
element - [6] : 84
element - [7] : -69
element - [8] : 4
element - [9] : -46
The given array is : 38 44 63 -51 -35 19 84 -69 4 -46 
The pair of elements whose sum is minimum are :
[ -46 , 44 ]


output : 3


Input the size of the array : 5
Input the element of the array : 
element - [0] : 0
element - [1] : 1
element - [2] : 23
element - [3] : -24
element - [4] : 43
The given array is : 0 1 23 -24 43 
The pair of elements whose sum is minimum are :
[ 0 , 1 ][ 23 , -24 ] 

*/