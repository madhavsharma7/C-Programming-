#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter character  ");
    scanf("%c", &ch);
    if(islower(ch) == 0)
    {
    	printf("%c is not an lower case character\n", ch);
	}    
    else
    {
    	printf("%c is an lower case character\n", ch);
	}
    return 0;
}
