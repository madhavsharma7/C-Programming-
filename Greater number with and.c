#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter number\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("Number a is largest=%d\n",a);
}
else if(b>a && b>c)
{
printf("Number b is largest=%d\n",b);
}
else if(c>a && c>b)
{
printf("Number c is largest=%d\n",c);
}
else
{
printf("equal\n");
}
}
