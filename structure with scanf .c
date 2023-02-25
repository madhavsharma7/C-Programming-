#include<stdio.h>
#include<string.h>
struct studentdata 
{
	char name[20];
	char gender[20];
	int age;
	int rollno;
	
};
int main()
{
  struct studentdata b1;
  printf("Entet the student name\n");
  scanf("%s",&b1.name);	
  printf("Enter gender\n");
  scanf("%s",&b1.gender);
  printf("Enter the age\n");
  scanf("%d",&b1.age);		
  printf("Enter the rollno\n");
  scanf("%d",&b1.rollno);	
}
