//Write a C program to read the roll no, marks of three subjects and calculate the total, percentage and division

#include<stdio.h>
void main()
{
	int  rollno,phy,chem,cs,total;
	float per;
	printf("Input the Roll Number of the student : ");
	scanf("%d",&rollno);
	printf("\nInput the marks :");
	printf("\nPhyscis : ");
	scanf("%d",&phy);
	printf("Chemistry : ");
	scanf("%d",&chem);
	printf("Computer Application : ");
	scanf("%d",&cs);
	total=phy+chem+cs;
	per=total/3;
	printf("Roll No :  %d\n",rollno);
	printf("Marks in physics : %d\n",phy);
	printf("Marks in Chemistry : %d\n",chem);
	printf("Marks in Computer Application : %d\n",cs);
	printf("Total marks = %d\nPercentage = %.2f",total,per);
	printf("\nDivision = ");
	if(per>=80)
	{
		printf("Distincation");
	}
	else if(per>=70&&per<=80)
	{
		printf("First");
	}
	else if(per>=60&&per<=70)
	{
		printf("Second");
	}
	else if(per>=50&&per<=60)
	{
		printf("Third");
	}
	else
	{
		printf("Fail");
	}
}
/*OUTPUT:
Input the Roll Number of the student : 12
Input the marks :
Physcis : 78
Chemistry : 87
Computer Application : 79
Roll No :  12
Marks in physics : 78
Marks in Chemistry : 87
Marks in Computer Application : 79
Total marks = 244
Percentage = 81.00
Division = Distincation	*/