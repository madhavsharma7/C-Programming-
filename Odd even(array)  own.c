#include<stdio.h>
int main()
{
	int i,arr[6];
	printf("Entet the element\n");
	for(i=0;i<6;i++)
	scanf("%d",&arr[i]);
	{
	printf("Entered number\n");
	for(i=0;i<6;i++)
	if(arr[i]%2==0)
	{
	printf("This number is even \n",arr[i]);
	}
	else if(arr[i]%2==1)
	{
	printf("This is odd \n",arr[i]);	
	}
	}
}