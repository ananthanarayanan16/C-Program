//input and output array element

#include<stdio.h>
int main()
{
    float arr[2];

    printf("Enter 1st element : ");
    scanf("%f",&arr[0]);
    printf("Enter 2nd element : ");
    scanf("%f",&arr[1]);
    printf("%f\n%f\n",arr[0],arr[1]);
    return 0;
}
/*
output:
Enter 1st element : 3
Enter 2nd element : 5
3.000000
5.000000
*/