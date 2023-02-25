#include<stdio.h>
int main()
{
int num1,num2,num3,p;
printf("Enter the marks of 3 subject\n");
scanf("%d%d%d",&num1, &num2,&num3);
p=num1+num2+num3/3;
 if(p>100)
 {
printf("\nWrong division\n");	
 }
else if(p>=70 && p<=100)
 {
printf("First division\n");
 }
else if(p>=55 && p<=75)
 {
printf("Second division\n");
 }
else if(p>=40 && p<=55)
 {
printf("third division\n");
 }
 else 
 {
printf("fail\n");
 }
 
}