#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
    if(ch>=65 && ch<=91)
    {
	printf("%c is an uppercase alphabet\n", ch);
	}
	else if(ch>=97 && ch<=123)
	{
	printf("%c is a an lowercase alphabet\n",ch);
	}
	
}