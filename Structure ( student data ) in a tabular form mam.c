#include<stdio.h>
struct Studentdata
{
char name[20];
int age;
char gender;
int rollno;
};
int main()
{
int i;
struct Studentdata st[5];
for(i=0;i<5;i++)
{
printf("Enter the name\n");
scanf("%s",&st[i].name);
printf("Enter the age\n");
scanf("%d",&st[i].age);
printf("Enter the gender\n");
scanf("%s",&st[i].gender);
printf("Enter the rollno\n");
scanf("%d",&st[i].rollno);
}
printf("Data entered above\n");
printf("name\tage \t gender \t rollno\n");
for(i=0;i<5;i++)
{
printf("%s\t",st[i].name);
printf("%d\t",st[i].age);
printf("%c\t",st[i].gender);
printf("%d\t",st[i].rollno);
printf("\n");
}
}
