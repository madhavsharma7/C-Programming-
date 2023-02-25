#include<stdio.h>
#include<string.h>
struct studentdata 
{
	char name[20],gender;
	
	int age,rollno;
	
};
int main()
{
  struct studentdata b1={"madhav",'m',19,6};
  printf("Student name is %s\n",b1.name);	
  printf("Studenta age is %d\n",b1.age);	
  printf("Student gender is %c\n",b1.gender);	
  printf("Student rollno is %d\n",b1.rollno);	
}