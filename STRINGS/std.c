//Student details

#include<stdio.h>
#include<string.h>
void main()
{
    char string[100],a[]="100",b[]="15";
    int size,i,num=1000;
    printf("Input the no of student name : ");
    scanf("%d",&size);
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
    printf("!@#$%^&*       %s",string);
    
}