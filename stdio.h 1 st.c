#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	
	char *str ="null";
	str=(char *) calloc(10, sizeof(char));
	strcpy(str,"hello");
	printf("String is %s\n", str);
	return 0;
}

