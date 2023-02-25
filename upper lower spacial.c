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
    else if(ch>=49 && ch<=57)
    {
    	printf("It's a digit\n");
    }
    else if ((ch>0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))
    {
    	printf("Character is a spacial character\n");
    }



}