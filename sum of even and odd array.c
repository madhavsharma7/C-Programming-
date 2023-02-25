#include<stdio.h>
int main()
{
int arr[10],i,n,sumeven=0,sumodd=0;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
printf("Ypu have entered the following elements\n");
for(i=0;i<n;i++)	
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
			sumeven=sumeven+arr[i];
		}
		else
		{
			printf("%d\n",arr[i]);
			sumodd=sumodd+arr[i];
		}
	}
printf("Sum of even number%d\n",sumeven);
printf("Sum of odd number%d\n",sumodd);
}