//jump

#include<stdio.h>
int main()
{
    int i,j,size,max=0,jump=0,length,k;
    printf("Input the size ");
    scanf("%d",&size);
    int array[size];
    printf("Input the array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        max=0;
        length=array[i];
        for(j=i;j<=length;j++)
        {
            if(max<array[j])
            {
                max=array[j];
            }
        }
        k=i+max;
        if(k<size)
        {
            jump++;
        }
    }
    printf("----%d---",jump);
    return 0;
}
