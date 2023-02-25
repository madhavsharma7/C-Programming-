//TO CALCULATE THE AREA OF RECTANGLE 
#include <stdio.h>
int main()
{
	int l, b, area;
	printf("\nEnter the length:\t");
	scanf("%d", &l);
	printf("\nEnter the breadth:\t");
	scanf("%d",&b);
	area=l*b;
	printf("\nArea of rectangle: %d\n", area);
}