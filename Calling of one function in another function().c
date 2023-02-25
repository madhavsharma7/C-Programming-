#include<stdio.h>
#include<string.h>
void calculate();
int main()
{
	int m1, m2;
	char name[20];
	printf("Enter marks of the subject\n");
	scanf("%d %d",&m1,&m2);
	printf("Enter name\n");
	scanf("%s",&name);
    display(name,m1,m2);
    printf("Hi we are in function calculator\n");  	
}
void display(char name[20],int m1, int m2)
{
	float avg;
	avg=(m1+m2)/2;
	printf("result is\n");
	printf("%s",name);
	printf("\t %f",avg);
	printf("Hi we are in function display\n");
}
int main()
{
	printf("He we are in main\n");
	calculate();
	printf("Hi we are in main after executing function\n");
}
