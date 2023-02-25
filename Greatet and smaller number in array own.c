#include<stdio.h>
int main()
{
	int i,num,min,max,a[20];
	printf("Enter the size :\n");
	scanf("%d",&num);
	printf("Enter the array elements :\n");
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	printf("enter the above elements :\n");
	for(i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("Largest no =%d\n",max);
	printf("Smallest no =%d\n",min);
}