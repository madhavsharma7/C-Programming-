#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("Total number of arguments are %d\n", argc);
	if(argc >=2)
	{
		printf("Arguement supplied are\n");
		for(i=i;i<argc;i++)
		{
			printf("%s\t",argv[i]);
		}
	}
	else 
	{
		printf("Empty argument list\n");
	}
}
		
	
	
	