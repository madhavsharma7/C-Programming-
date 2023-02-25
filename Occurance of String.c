#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20], search;
	printf("Enter the name\n");
	gets(fname);
	printf("Enter the character\n");
	scanf("%c",&search);
	printf("First occurance of %c in %s\n",search,strchr(fname,search));

	
}