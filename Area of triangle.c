//TO CALCULATE AREA OF TRIANGLE 
#include<stdio.h>
int main()
{
	int h, b ;
	float area;
	printf("\n\nEnter the height of the Triangle :");
	scanf("%d",&h);
	printf("\nEnter the base of the Triangle :");
	scanf("%d",&b);
	area=(h*b)/(float)2;
	printf("\nThe area of the triangle is : %f\n",area);
}