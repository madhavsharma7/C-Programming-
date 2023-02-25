#include<stdio.h>
int main()
{
	FILE *fp1, *fp2;
	char filename[100], c ;
	fp1=fopen("empdata.txt","r");
	fp2=fopen("duplicate123.text","w");
	c=fgetc(fp1);
	while(c!=EOF)
	{
		fputc(c, fp2);
		c=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
}