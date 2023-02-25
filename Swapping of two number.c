#include<stdio.h>
int main()
{
	int first,second,temp;
	printf("Enter the 1st number\n");
	scanf("%d",&first );
	printf("Enter the 2nd number\n");
	scanf("%d",&second);
	temp=first;
	first=second;
	second=temp;
	printf("After swapping first number %d\n",first);
	printf("After swapping second number %d\n",second);

}
