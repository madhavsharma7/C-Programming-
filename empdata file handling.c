#include<stdio.h>
int main()
{
FILE *empdata;
int salary,id;
char name[20];
empdata=fopen("vinay.txt","w");
printf("Employee name - ");
scanf("%s",name);
fprintf(empdata,"%s",name);
printf("\nEnter employee salary - ");
scanf("%d",&salary);
fprintf(empdata, "\t%d\t" ,salary);
printf("Enter employee id - ");
scanf("%d",&id);
fprintf(empdata, "\t%d\t" , id);
fclose(empdata);
empdata=fopen("vinay.txt","r");
while(!feof(empdata))
{
printf("%c",fgetc(empdata));
}
printf("%c",getc(empdata));
fclose(empdata);
}