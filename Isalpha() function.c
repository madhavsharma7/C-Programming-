#include<stdio.h>
#include<ctype.h>
int main()
{
    char al;
    printf("Enter a character ");
    scanf("%c", &al);
    if (isalpha(al) == 0)
    {
    	printf("%c is not an alphabet\n", al);
	}    
    else
    {
    	printf("%c is an alphabet\n", al);
	}
    return 0;
}
