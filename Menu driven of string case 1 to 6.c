#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20],lname[20],search, name1[20];
	int ch, result;
	printf("Enter the name\n");
	gets(fname);
	printf("Enter the last name\n");
	gets(lname);
	printf("Enter the character\n");
	scanf("%c", &search);
	{
	   printf("Which function you want to use\n");
	   printf("1. length of string\n");
	   printf("2. Reverse of string\n");
	   printf("3. Copy of string\n");
	   printf("4. Concetanate of string\n");
	   printf("5. Compare of string\n");
	   printf("6. print of character where first it occured in string\n");
       printf("Enter your choice\n");
       scanf("%d",&ch);
       switch(ch)
       {
       	case 1: printf("length of string is %d\n",strlen(fname));
       	 break ;
       	 case 2: printf("reversing of string is %s\n",strrev(fname));
       	 break;
       	 case 3: strcpy(name1,fname);
		       	printf("copy of string is  %s\n",name1);
       	 break ;
       	 case 4:  printf("concetanate of string is %s\n",strcat(fname,lname));
       	 break ;
       	 case 5: result=strcmp(fname,lname);
       	 printf("Result is %d",result);
      	 if(result>0)
         printf("Last name is smaller\n");
	     else if(result==0)
	     printf("Last name is equal to first name\n");
       	 else if(result<0)
         printf("Last name is larger than first name\n");
       	 break ;
       	 case 6: printf("First occurance of %c in %s\n",search,strchr(fname,search));
       	 break ;
       	 default:
       	 printf("Error!\n");
       	
       }
	   }
}