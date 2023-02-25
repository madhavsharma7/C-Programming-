#include<stdio.h>
int main()
{
 int num=0,num2=1,nexterm,n,i;
  printf("enter a element\n");
  scanf("%d",&n);
  printf("Fibonacci Series= ");
  for(i=1;i<=n;++i)	
  {
  	nexterm=num+num2;
  	num=num2;
  	num2=nexterm; 
	  printf("%d, ",num);
  }
  	
}