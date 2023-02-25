#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter character ");
    scanf("%c", &a);
    if (isdigit(a) == 0)
    {
    	printf("%c is not a digit\n", a);
	}    
    else
    {
    	printf("%c is a digit\n", a);
	}
    return 0;
}
