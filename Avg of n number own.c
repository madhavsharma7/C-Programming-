#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=1,sum=0;
	float avg,x; 
	printf("Enter the value of n ");
	scanf("%d",&n);
	while (count<=n)
	{
    	printf("Enter number %d ",count);
	    scanf("%f",&x);
    	sum=sum+x;
    	++count;
    }   
     
	avg=sum/n;
    printf("\nAverage marks %f \n",avg);    
}