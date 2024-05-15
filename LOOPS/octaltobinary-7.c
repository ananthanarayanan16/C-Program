//Write a program in c to convert an octal number into binary.

#include<stdio.h>
int main()
{
    int i,octal,reaminder,reverse=0;
    printf("Input an octal number (Using digits 0-7) : ");
    scanf("%d",&octal);
    printf("The equivalent binary number : ");
    for(i=octal;i>0;i/=10)
    {
        reaminder=i%10;
        reverse=reverse*10+reaminder;
    }
    for(i=reverse;i>0;i/=10)
    {
        reaminder=i%10;
        if(reaminder==1)
        {
            printf("%d%d%d",0,0,1);
        }
        else if(reaminder==2)
        {
            printf("%d%d",0,10);
        }
        else if(reaminder==3)
        {
            printf("%d%d",0,11);
        }
        else if(reaminder==4)
        {
            printf("%d",100);
        }
        else if(reaminder==5)
        {
            printf("%d",101);
        }
        else if(reaminder==6)
        {
            printf("%d",110);
        }
        else if(reaminder==7)
        {
            printf("%d",111);
        }
        else
        {
            printf("%d%d%d",0,0,0);
        }
    }
    return 0;
}
/*
output:
Input an octal number (Using digits 0-7) : 1755
The equivalent binary number : 001111101101   
*/



//  n=i%10;
//         sum1=0;
//         // sum2=0;
//         for(j=n;j>0;j/=base)
//         {
//             m=j%base;
//             sum1=sum1*10+m;
//         }
//         printf("%d\n",sum1);
//         for(k=sum1;k>0;k/=10)
//         {
//             l=k%10;
//             sum2=sum2*10+l;
//         }
//         // sum3=sum2*1000+sum3;
//          printf("\n%d",sum2);












// for(i=octal;i>0;i=i/10)
//     {
//         sum2=0;
//         n=i%10;
//         for(j=n;j>0;j=j/base)
//         {
//             m=j%base;
//             printf("\n%d",m);
//             sum1=sum1*10+m;
//         }
//         // printf("\n%d",sum1);
//         for(j=sum1;j>0;j=j/10)
//         {
//             k=j%10;
//             sum2=sum2*10+k;
//         }
//         printf("\n%d",sum2);
        
//     }
//     // for(j=sum1;j>0;j=j/1000)
//     // {
//     //     n=j%1000;
//     //     binary=binary*1000+n;
//     // }
//     // printf("\n%d",binary);
    




























    // // reverse=octal;
    // // for(i=octal;i>0;i=i/10)
    // // {
    // //     n=i%10;
    // //     sum1=sum1*10+n;
    // // }
    // for(i=octal;i>0;i/=10)
    // {
    //     sum1=0;
    //     reverse=0;
    //     n=i%10;
    //     for(j=n;j>0;j/=base)
    //     {
    //         n=j%base;
    //         // printf("\n%d",n);
    //         reverse=reverse*10+n;
           
    //     }

    //      printf("\n%d",reverse);
    //      for(j=reverse;j>0;j/=10)
    //      {
    //         n=j%10;
    //         sum1=sum1*10+n;
    //      }
    //      printf("\n%d",sum1);
    //     sum2=sum2*1000+sum1;
    // }
    // printf("\n%d",sum2);
    // reverse=0;
    // for(i=sum2;i>0;i=i/10)
    // {
    //     n=i%10;
    //     // printf("\n%d",n);
    //     reverse=reverse*10+n;
    //     // printf("\n%d",reverse);
    // }
    // // printf("\n%d",reverse);
 