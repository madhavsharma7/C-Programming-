#include<stdio.h>
void factorial();
int main()
{
	int fact=1;
	factorial();	
}
void factorial()
{
	int n, i;
	int fact=1;
	printf("Enter the integer= ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		fact=fact*i;
	}
	printf("factorial is %d\n", fact);
}