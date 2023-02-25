#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char a1[20]="madhav", a2[20]="sharma";
	i=0;
	while (a1[i]!='\0')
	{
		++i;
	}
	for (j=0; a2[j]!='\0'; ++j, ++i)
	{
	a1[i]=a2[j];
	}
	printf("after concatenate\n");
	puts(a1);
}
