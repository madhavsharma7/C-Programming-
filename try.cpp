#include<stdio.h>
#include<string.h>
struct studentdata 
{
	char name[20];
	char gender[20];
	int age;
	int rollno;
	
};
void show(struct studentdata b1);
int  main()
{
  printf("Enter the student name\n");
  scanf("%s",&b1[i].name);	
  printf("Enter gender\n");
  scanf("%s",&b1[i].gender);
  printf("Enter the age\n");
  scanf("%d",&b1[i].age);		
  printf("Enter the rollno\n");
  scanf("%d",&b1[i].rollno);	
  show();
}

void show(struct studentdata b1)
{
	printf("Name = %s\n",b1[i].name);
	printf("Gender = %s\n",b1[i].gender);
	printf("Age =%d\n",b1[i].age);
	printf("Rollno = %d\n",b1[i].rollno);      	
}
}
