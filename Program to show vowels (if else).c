#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet\n");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'A' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == 'e' || ch == 'E')
	printf("%c is a vowel\n",ch);
	else
	printf("%c is not a vowel\n",ch);
	return 0;
	
}