//Wap to find sum of first odd number 
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the end point of the series\n");
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{
		sum+=i;
		i+=2;
	}
printf("The sum of the Series=%d\n",sum);
}