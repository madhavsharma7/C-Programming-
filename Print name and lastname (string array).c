#include<stdio.h>
#include<string.h>
int main()
{
	
	char firstname[20], lastname[20];
	int i;
	printf("Enter the  firstname\n");
	gets(firstname);
	
	printf("Enter the lastname\n");
	gets(lastname);
	printf("Your Name =%s\t\n",strcat(firstname,lastname));
 
}