//Dynamic memory allocation 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int index=0,i=0,n,*marks;
    int ans;
    marks=(int*)malloc(sizeof(int));
    if(marks==NULL)
    {
        printf("\nMemory cannot allocated.");
    }
    else
    {
        printf("\nMemory has been successfully allocated by using malloc \n");
        printf("\nmarks = %p\n",marks);
        do
        {
            printf("\nEnter marks : ");
            scanf("%d",&marks[index]);
            printf("Would you like to add more (1/0) : ");
            scanf("%d",&ans);
            if(ans==1)
            {
                
            // printf("\n****  &&&  %d  \n",index);
                index++;
                marks=(int*)realloc(marks,index+1*sizeof(int));
                if(marks==NULL)
                {
                    printf("\nMemory cannot allocated.");
                }
                else
                {
                    printf("Memory has been successfully reallocated using realloc \n");
                    printf("\nBase address of marks are : %p",marks);
                }
            }
        }
        while(ans==1);
        for(i=0;i<=index;i++)
        {
            printf("Marks of student %d are : %d\n",i,marks[i]);
        }
    }
    return 0;
}

/*

output : 

Memory has been successfully allocated by using malloc 

marks = 00121618

Enter marks : 70
Would you like to add more (1/0) : 1
Memory has been successfully reallocated using realloc 

Base address of marks are : 00121618
Enter marks : 80
Would you like to add more (1/0) : 1
Memory has been successfully reallocated using realloc 

Base address of marks are : 00121618
Enter marks : 90
Would you like to add more (1/0) : 0
Marks of student 0 are : 70
Marks of student 1 are : 80
Marks of student 2 are : 90

*/