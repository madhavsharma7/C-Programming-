// calculator using Functions
#include<stdio.h>
int add(int a,int b); //Function Declaration
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int main()
{
int choice, num1,num2,res;
printf("menu\n");
printf("1. add\n");
printf("2. subtract\n");
printf("3. Multiplication\n");
printf("4. Divison\n");
printf("Enter your choice\n");
scanf("%d", &choice);
printf("enter two numbers\n");
scanf("%d %d", &num1, &num2);
switch(choice)
{
case 1: res= add(num1,num2);
printf("the result is =%d",res);
break ;
case 2: res=subtract(num1,num2);
printf("the result is =%d",res);
break;
case 3: res=multiply(num1,num2);
printf("the result is =%d",res);
break;
case 4: res=divide(num1,num2);
printf("the result is =%d",res);
break;
default :
printf("wrong choice\n");
}
}
int add(int a,int b)
{
int result;
result = a+b;
return result;
}
int subtract(int a,int b)
{
int result;
result = a-b;
return result;
}
int multiply(int a,int b)
{
int result;
result = a*b;
return result;
}
int divide(int a,int b)
{
int result;
result = a/b;
return result;
}