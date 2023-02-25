#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("enter a value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial = %d\n",fact);
}