//eg array

#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    printf("array[0] = %d\n",array[0]);
    printf("array[1] = %d\n",array[1]);
    array[0]=6;
    array[1]=-1;
    printf("array[0]= %d\narray[1] = %d\n",array[0],array[1]);
    return 0;
}
/*
output:
array[0] = 1
array[1] = 2
array[0]= 6
array[1] = -1
*/