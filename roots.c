#include<stdio.h>
int main()
{
int a, b, c, d;
printf("enter numebrs");
scanf("%d %d %d &a, &b, &c);
d=b^2-4*a*c;
if(d==0);
{
printf("Equal root\n");
}
else if(d>0):
{
printf("real roots\n");
}
else if(d<0);
{
printf("unreal roots\n");
}
}