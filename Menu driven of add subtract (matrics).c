#include<stdio.h>
#include<math.h>
int main()
{
int i,j,row,col,row1,col1;
int choice;
printf("Enter the rows and column\n");
scanf("%d %d",&row,&col);
printf("Enter the rows and column of matrix 1\n");
scanf("%d %d",&row1,&col1);


int a1[row][col],a2[row][col1],add[row][col];
if(row==row1 && col==col1)
{
 	printf("Enter Matrix 1\n");
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
    {
    scanf("%d",&a1[i][j]);
    }
    }
    printf("Enter Matrix 2\n");
    for(i=0;i<row1;i++)
    {
    for(j=0;j<col1;j++)
    {
    scanf("%d",&a2[i][j]);
    }
    }

printf("Which function you want to use\n");
printf("1. Addition\n");
printf("2. Substraction\n");
printf("\n");

printf("Enter your choice\n");
scanf("%d",&choice);     
       switch(choice)
       {
       	 case 1: 
       	 
       	 for(i=0;i<row;i++)
         {
         for(j=0;j<col;j++)
         {
         add[i][j]=a1[i][j]+a2[i][j];
         }
         }
         printf("Addition of above matrices\n");
         for(i=0;i<row;i++)
         {
         for(j=0;j<col;j++)
         {
         printf("%d\t",add[i][j]);
         }
         printf("\n");
         }
			
       	 break ;
       	 
       	 
       	 case 2:
       	 
			for(i=0;i<row;i++)
            {
            for(j=0;j<col;j++)
            {
            add[i][j]=a1[i][j]-a2[i][j];
            }
            }
            printf("substraction of above matrices \n");
            for(i=0;i<row;i++)
            {
		    for(j=0;j<col;j++)
            {
            printf("%d\t",add[i][j]);
            }
            printf("\n");
            } 
            default:
       	    printf("Error!\n");
    }
    }
    else
    {
	printf("Error!\n");
    }
}