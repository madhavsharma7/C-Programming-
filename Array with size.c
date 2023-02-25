#include<stdio.h>
int main()
{
int n,i,a[20];
printf("enter size of an array\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("you have entered %d\n",a[i]);
}