#include <stdio.h>
int main()
{
    int a[10][10], b[10][10],c[10][10], m1, m2,rb,cb, i, j;
    printf("Enter rows and columns of matrix A ");
    scanf("%d %d", &m1, &m2);
    printf("Enter rows and columns of matrix B ");
    scanf("%d %d", &rb, &cb);
    if((m1==rb)&&(m2==cb))
    {
     printf("\nEnter matrix A elements:\n");
   	 for (i = 0; i < m1; ++i)
   	 {
    	for (j = 0; j < m2; ++j)
 {
             scanf("%d", &a[i][j]);
        }
   	 }
   
    printf("\nEnter matrix B elements:\n");
    for (i = 0; i < rb; ++i)
    {
    	for (j = 0; j < cb; ++j)
 {
             scanf("%d", &b[i][j]);
        }
    }
for (i = 0; i < rb; ++i)
    {
    	for (j = 0; j < cb; ++j)
 {
 	c[i][j]=a[i][j]+b[i][j];
  		  }
    }
    printf("\nEntered matrix A is : \n");
    for (i = 0; i < m1; ++i)
    {
    	for (j = 0; j < m2; ++j) 
{
            printf("%d  ", a[i][j]);
}
                printf("\n");
  }
  printf("\nEntered matrix B is : \n");
    for (i = 0; i < rb; ++i)
    {
    	for (j = 0; j < cb; ++j) 
{
            printf("%d  ", b[i][j]);
}
                printf("\n");
  }
  printf("\nResult of addition is : \n");
    for (i = 0; i < m1; ++i)
    {
    	for (j = 0; j < m2; ++j) 
{
            printf("%d  ", c[i][j]);
}
                printf("\n");
  }
    }
    else 
     {
 printf("row and col of A is not equal to rows and col of B\n");
 printf("so can't be added\n");
     }
}
