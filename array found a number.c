#include<stdio.h>
int main()
{
int arr[10],n,num,i,flag;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elemenets of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the no you want to search\n");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(arr[i]==num)
{
flag=0;
}
}
if(flag==0)
printf("\n found :)\n\n");
else
printf("\nnot found :(\n\n");
}