#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("INTROmadhav.txt","w");
	fprintf(fp,"hello i'm from bca :)\n");
	fclose(fp);	
}