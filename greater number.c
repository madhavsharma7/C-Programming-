#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter number\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("number a greater\n");
}
else if(b>a)
{
if(b>c)
printf("number b greater\n");
}
else if(c>a)
{
if(c>b)
printf("number c greater\n");
}
else
{
printf("equal\n");

}
}