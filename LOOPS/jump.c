//Write a C program to find minimum number oof 

#include<stdio.h>
int main()
{
    int i,j,l,k,m,n,size,jump=0;
    printf("Input the size : ");
    scanf("%d",&size);
    int array[size];
    printf("Input the element of the array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    l=0,k=0;
    start:
    i=l;
    j=k+i;
    k=array[j];
    if(k<0||k==0)
    {
        printf("\nthe array containing zero .");
        goto out;
    }
    n=k+i;
    l=array[n];
    jump++;
    if(n>size)
    {
        goto out;
    }
    goto start;
    out:
    printf("\nTOtal numnber of jump : %d",jump);
    return 0;
}