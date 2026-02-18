// #include<stdio.h>

// int fun()
// {
//     return 89;
// }

// int main()
// {
//     static int n;
//     n = fun();
//     printf("N = %d", n);
//     return 0;
// }

// struct test_static
// {
//     int a;
//     float b;
//     static int x;
// };

// int main()
// {
//     struct test_static var;
//     var.x = 10;
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int a,b,c;
//     printf("Enter two number with (space) ' ' :");
//     scanf("%d %d",&a,&b);
//     c = a + b;
//     printf("Addition of %d and %d is %d",a,b,c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two number : ");
//     scanf("%d%d",&a,&b);
//     if(a == b)
//     {
//         printf("Equal");
//         int i = 10;
//         printf("\ni = %d",i);
//     }
//     else if((a != b))
//     {
//         printf("Not Equal");
//     }

//     // else
//     // {
//     //     printf()
//     // }
//     return 0;
// }

// #include<stdio.h>
// float main()
// {
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c",&ch);
//     switch(ch)
//     {
//         default:
//         printf("Invalid Input");
//         break;
//         case 'a':
//         printf("Apple");
//         break;
//         case 'b':
//         printf("Ball");
//         break;

//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i, j;
//     for(i = 0; i < 5; i++)
//     {
//         for(j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,k,row;
//     printf("Enter No Of Rows : ");
//     scanf("%d",&row);
//     for(i = 0; i < row; i++)
//     {
//         for(j = i; j < row; j++)
//         {
//             printf(" ");
//         }
//         for(k = 0; k <= i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int i,j,row;
//     printf("Enter rows : ");
//     scanf("%d",&row);
//     for(i = 0; i < row; i++)
//     {
//         for(j = i; j >= 0; j--)
//         {
//             if(j%2 != 0)
//             {
//                 printf("0");
//             }
//             else
//             {
//                 printf("1");
//             }
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int n,m,i,x,sum=0;
//     printf("Input a number : ");
//     scanf("%d",&n);
//     m=n;
//     int z=0;
//     while(m >0)
//     {
//         m=m/10;
//         z++;
//     }
//     m = n;
//     while(n>0)
//     {
//         i=n%10;
//         // x=i*i*i;
//         x=1;
//         for(int j = 1;j <= z; j++)
//         {
//             x = x * i;
//         }
//         sum=sum+x;
//         n=n/10;
//     }
//     if(sum==m)
//     {
//         printf("%d is an Armstrong number.",m);
//     }
//     else
//     {
//         printf("%d is an not Armstrong number.",m);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,m,num=0;
//     printf("Input a number : ");
//     scanf("%d",&n);
//     printf("The number in reverse order is : ");
//     while(n>0)
//     {
//         m=n%10;
//         num = (num *10) + m;
//         // printf("%d",m);
//         n=n/10;
//     }
//     printf("%d",num);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     int i;
//     printf("Enter a string : ");
//     fgets(str,sizeof(str),stdin);
//     for(i = 0;  str[i] != '\n' || '\0'; i++)
//     {
//         printf("%c\n",str[i]);
//     }
//     // printf("Input the string (using fgets() ) : ");
//     // fgets(str,sizeof(str),stdin);
//     // printf("The characters of the string are : ");
//     // for(i=0;str[i]!='\0';i++)
//     // {
//     //     printf("%c ",str[i]);
//     // }
//     return 0;
// }

// #include<stdio.h>
// void main()
// {
//     char str[120];
//     printf("SizeOf : %lu",sizeof(str));
// }

// #include<stdio.h>
// void main()
// {
//     char str[] = "0";
//     int num;
//     num = str[0];
//     printf("Str is : %d", num);
// }

// #include <stdio.h>
// int main() {
//     char ch;
//     int a,b;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);
//     // scanf("%d%c%d",&a,&b);
//     // printf("You entered: %d *** %d", a,b);
//     printf("Yout entered : %c", ch);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter a string : ");
//     // scanf("%s", str);          // Without read whitespaces
//     // THIS READ WHITESPACE
//     // scanf("%[^\n]",str);
//     // gets(str);
//     fgets(str,sizeof(str),stdin);
//     printf("Given String : %s\n",str);
//     return 100;
// }

// STRING ********************
#include<stdio.h>
int main()
{
    char str[100];
    int size;
    printf("Enter Size : ");
    scanf("%d", &size);
    char str1[size][50];
    printf("Enter a String : ");
    scanf(" %[^\n]", &str);
    getchar();              // AFTER THE STRING THE NEWLINE STORE HERE
    printf("Given string is : %s",str);
    printf("\nGetting Multiple Names : ");
    printf("\nEnter %d names : \n",size);
    for(int i = 0; i < size; i++)
    {
        printf("%d name is : ",i);
        fgets(str1[i],sizeof(str1[i]),stdin);
    }
    printf("\nThe given names are : \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d name is : ",i);
        printf("%s\n",str1[i]);
    }
    return 0;
}