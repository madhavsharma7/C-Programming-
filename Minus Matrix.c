#include<stdio.h>
int main()
{
     int a1[3][3],a2[3][3],minus[3][3];
     int i,j;
     printf("Enter Matrix 1\n");
     for(i=0;i<3;i++)
     {
     	for(j=0;j<3;j++)
        {
        	scanf("%d",&a1[i][j]);
        }
     }
     printf("Enter Matrix 2\n");
     for(i=0;i<3;i++)
     {
     	for(j=0;j<3;j++)
        {
        	scanf("%d",&a2[i][j]);
        }
     }
     for(i=0;i<3;i++)
     {
     	for(j=0;j<3;j++)
        {
        	minus[i][j]=a1[i][j]-a2[i][j];
        }
     }
     printf("Subtraction of above matrices is\n");
     for(i=0;i<3;i++)
     {
     	for(j=0;j<3;j++)
        {
        	printf("%d\t",minus[i][j]);
        }
     printf("\n");
 }

}