#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,a,b,p,t;
	printf("Menu\n");
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiplication\n");
	printf("4. Divison\n");
	printf("Enter the number\n");
	scanf("%d %d %d",&a,&b,&p);
	switch(p)
	{
		case 1:
		t=a+b;
		printf("Sum of two number=%d\n",t);
        break;
		case 2:
		t=a-b;
		printf("Subtract of two numbers=%d\n",t);
		break;
		case 3:
		t=a*b;
		printf("Multiply of two numbers=%d\n",t);
		break;
		case 4:
		t=a/b;
		printf("Divison of two numbers=%d\n",t);
		break;
		default:
		printf("Error! operator is not correct\n");
	}
	
}