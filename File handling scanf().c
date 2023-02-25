#include<stdio.h>
int main()
{
	FILE *fp;
	char buff[20];
	fp=fopen("file5442.txt","w");
	fprintf(fp,"hello i'm from bca \n");
	fclose(fp);	
	fp=fopen("file5442.txt","w");
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	printf("\n");
	fclose(fp);
}