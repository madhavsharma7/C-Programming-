#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int  a,b,c,x,d;
	printf("Enter the four number\n");
	scanf("%d %d %d %d",&a, &b ,&c, &x);
	d=a*x*x+2+b*x*c;
	if(d==0)
	{
		printf("Equal root=%d\n",d);	
	}
	
	else if(d>0)
	{
		printf("Real root=%d\n",d);
	}
	else if(d<0)
	{
		printf("Imaginary root=%d\n",d);
	}
}