#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
    fp = fopen("file789.txt", "w" );
    printf("String: \n");
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c", ch );
		ch = fgetc( fp );   
	}
    fclose(fp);
   	return 0;
}