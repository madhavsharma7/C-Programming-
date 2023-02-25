#include<stdio.h>
#include<stdlib.h>
int main()
 {
 	int x,y;
   div_t output;
   printf("Enter value of X ");
   scanf("%d",&x);
   printf("Enter value of Y ");
   scanf("%d",&y);
   output = div(x,y);
   printf("Quotient part %d/%d = %d\n", x,y,output.quot);
   printf("Remainder part %d/%d = %d\n", x,y,output.rem);
}