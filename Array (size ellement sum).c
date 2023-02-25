#include<stdio.h>
int main()
{
	int arr[10],i,n,sum=0;
	printf("Entet the size of element\n");
	scanf("%d",&n);
	printf("Enter the element of array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
    printf("Sum of the array is : %d\n",sum);
}