#include<stdio.h>
#include<conio.h>
main()
{
int i,t;
printf("which table u want:");
scanf("%d",&t);
for (i=1; i<=10; i++)
printf("\n%d*%d=%d",t,i,i*t);
}
