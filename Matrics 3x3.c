#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("enter the element of a matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("The matrixs is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	
	
	}
}