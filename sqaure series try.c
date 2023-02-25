#include <stdio.h>
int main()
{
    int i, n,sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    for(i=1; i>=n; i++)
	sum+=i*i;
    {
        printf("%d\n", i);
    }

}