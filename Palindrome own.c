#include<stdio.h>
int main()
{
	int reverse=0,r,n,orig;
	printf("Enter number\n");
	scanf("%d",&n);
	orig=n;
	while(n!=0)
	{
	r=n%10;
	reverse=(reverse*10)+r;
	n=n/10;
	}
	if(orig==reverse)
	{
	printf("%d this is palindrome number\n",orig);	
	}
    else
    {
   	 printf("%d this is not a palindrome number\n",orig);
    }	
}