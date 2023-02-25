#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int i;
	printf("Enter the name\n");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	printf("Length of string= %d\n",i);	
	printf("\n");

} 