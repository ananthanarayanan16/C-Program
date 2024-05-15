//Write a C program to determine eligibility for admission to a professional course based on the following criteria

#include<stdio.h>
void main()
{
	int maths,phy,chem,total1,total2;
	printf("Input the marks obtained in physics   :  ");
	scanf("%d",&phy);
	printf("Input the marks obtained in chemistry  :  ");
	scanf("%d",&chem);
	printf("Input the marks obtaind in Mathematices  : ");
	scanf("%d",&maths);
	total1=phy+chem+maths;
	total2=maths+phy;
	printf("\nTotal marks of Maths,physics and chemistry  :  %d",total1);
	printf("\nTotal marks of Maths and physics : %d",total2);
	if((maths>=65)&&(phy>=55)&&(chem>=50)&&(total1>=190)&&(total2>=140))
	{
		printf("\n The candidate is eligible for admission.");
	}
	else
	{
		printf("\nThe candidate is not eligible for addimission.");
	}
}
/*OUTPUT:
Input the marks obtained in physics   :  78
Input the marks obtained in chemistry  :  89
Input the marks obtaind in Mathematices  : 90

Total marks of Maths,physics and chemistry  :  257
Total marks of Maths and physics : 168
 The candidate is eligible for admission.		*/