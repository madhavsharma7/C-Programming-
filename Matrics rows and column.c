#include<stdio.h>
#include<math.h>
int main()
{
int i,j,row,col,row1,column1;
printf("Enter rows and column\n");
scanf("%d %d",&row,&col);
printf("Enter matrix 1 rows and column\n");
scanf("%d %d",&row1,&column1);
printf("Enter Matrix 1\n"); //matrics 1
int a1[row][col],a2[row][column1],add[row][col];
if(row==row1 & col==column1)
 {
   for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
    {
   scanf("%d", & a1[i][j]);
    }
  }
printf("Enter Matrix 2\n"); // matrics 2
for(i=0;i<row1;i++)
   {
    for(j=0;j<column1;j++)
     {
      scanf("%d",&a2[i][j]);
     }
   }
    for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
     {
   add[i][j]=a1[i][j]+a2[i][j]; // add element 
    }
   }
   printf("Addition of matrices\n");
    for(i=0;i<row;i++)
   {
   for(j=0;j<col;j++)
   {
  printf("%d\t",add[i][j]);
  }
  printf("\n");
  }
  }
 else
 {
 printf("Enter the same element\n");	
 }
 }