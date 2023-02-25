#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20], lname[20];
	printf("Enter the first name\n");
	gets(fname);
	printf("Enter the last nsme\n");
	gets(lname);
	printf("Concetanate string is %s\n",strcat(fname,lname));	
}
	