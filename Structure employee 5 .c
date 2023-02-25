#include<stdio.h>
#include<string.h>
struct employeedata 
{
	char name[20];
	int avgsal;
};
int main()
{
	int i;
		struct employeedata s[5];
		printf("Enter the 5 employee name \n");
		for(i=1;i<5;i++)
{
  printf("Enter the employee name\n");
  scanf("%s",&s[i].name);	
  printf("Enter avg salary\n");
  scanf("%d",&s[i].avgsal);
}
printf("\nemployee data list\n");
for(i=1;i<5;i++)
{
	printf("Name = %s\n",s[i].name);
	printf("avg salary = %d\n",s[i].avgsal);
}
}
