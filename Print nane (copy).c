#include<stdio.h>
#include<string.h>
int main()
{
	
	char name[20], name1[20];
	printf("Enter the  firstname\n");
	gets(name);
	
	printf("Copy Name =%s\n",strcpy(name1,name));
    
}
