#include<stdio.h>
int main()
{
FILE *fp;
int i=1,id,salary;
char name[20],ch;
char buff[30];
fp=fopen("vinay.txt","w");
do{
printf("Enter the name,id and salary of employee\n");
scanf("%s %d %d",name,&id,&salary);
fprintf(fp,"%s %d %d\n",name,id,salary);
printf("Do you want to continoue\n");
scanf("%s",&ch);
}while(ch=='y');
fclose(fp);
fp=fopen("vinay.txt","r");
printf("entered data\n");
while(!feof(fp))
printf("%c",fgetc(fp));
fclose(fp);
}