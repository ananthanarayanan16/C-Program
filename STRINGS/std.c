//Student details

#include<stdio.h>
#include<string.h>
void main()
{
    char string[100],a[]="100",b[]="15";
    int size,i,num=1000;
    printf("Input the no of student name : ");
    scanf("%d",&size);
    getchar();
    char str[size][100];
    printf("Input %d student names : \n",size);
    for(i=0;i<size;i++)
    {
        printf("str[%d] - ",i);
        // gets(str[i]);
        fgets(str[i],sizeof(str[i]),stdin);
        // scanf("%s",str[i]);
    }
    printf("The given student name are : \n");
    for(i=0;i<size;i++)
    {
        printf("\nstr[%d] - %s",i,str[i]);
    }
    sprintf(string,"%d",num);
    // string=(int)a*b;
    printf("The num is now String : %s \n",string);
    // printf("a = %d", a[2]);
}


/*

output :

Input the no of student name : 4
Input 4 student names : 
str[0] - Ananth 
str[1] - Sri
str[2] - HappY
str[3] - KyootE
The given student name are : 

str[0] - Ananth

str[1] - Sri

str[2] - HappY

str[3] - KyootE
The num is now String : 1000 

*/





// #include <stdlib.h>
// #include<stdio.h>
// int main()
// {
// int num = atoi(b);
// printf("b = %d", num);
// return 0;
// }

