#include<stdio.h>
#include<ctype.h>
int main()
{
    char alpha;
    printf("Enter a character ");
    scanf("%c",&alpha);
    if (isalnum(alpha)==0)
    {
    	printf("%c is not a alphanumeric character\n ", alpha);
	}    
    else
    {
    	printf("%c is a alphanumeric character\n ", alpha);
	}

}
