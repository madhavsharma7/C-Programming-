#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (isspace(a) == 0)
    {
    	printf("%c is not a space character\n", a);
	}    
    else
    {
    	printf("%c is a space character\n", a);
	}
    return 0;
}
