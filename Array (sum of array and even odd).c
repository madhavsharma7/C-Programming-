#include<stdio.h>
int main()
{
int arr[10],n,i,sum1=0,sum2=0;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elemenets of array\n");
for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
printf("you have enter the following elements\n");
for(i=0;i<n;i++)
    {
       if (arr[i]%2==0)
    {
       printf("%d\n",arr[i]);
       sum1=sum1+arr[i];
     }
else
   {
     printf("%d\n",arr[i]);
     sum2=sum2+arr[i];
   }
}
printf("sum of even no%d\n",sum1);
printf("sum of odd no%d\n",sum2);

}