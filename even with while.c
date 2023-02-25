#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the end point of the series\n");
	scanf("%d",&n);
	i=0;
	while (i<=n)
	{
		sum+=i;
		i+=2;
	}
printf("the sum of the Series=%d\n",sum);
}