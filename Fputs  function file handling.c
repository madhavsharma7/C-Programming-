#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char s[50];
	fp = fopen( "filedata.txt", "w" );
	printf(" Enter String : " );
	gets( s );
	fputs( s, fp );
	fputs( "\n", fp );
	fclose( fp );
   	return 0;
}