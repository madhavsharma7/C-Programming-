#include<stdio.h>
int main()
{
     int arr[10],n,num,i,flag;
     printf("Enter the size of array\n");
     scanf("%d",&n);
     printf("Enter the elemenets of array\n");
	 
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the no you want to search\n");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(arr[i]==num)
    {
      flag=0;
    }
}
if(flag==0)
     printf("\n Found :)\n\n");
else
    printf("\n Not found :(\n\n");
}