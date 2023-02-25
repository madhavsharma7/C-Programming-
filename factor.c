#include <stdio.h>
int main()
{
    int x, i = 1;

    printf("Enter the positive integer number");
    scanf("%d", &x);

    printf("\nThe factors of the %d are:", x);
    while(i<=x)
	 {
    	if(x%i==0)
     {
     printf("%d,",i);
     }
     ++i;
    }
    printf("\n");
}