#include<stdio.h>
void add(int a, int b);  // declaring 
int main()
{
   int a, b;
   printf("Hi we are making first program with function\n");
   printf("Enter the numbers you want to add\n");
   scanf("%d %d",&a, &b);
   add(a, b); //function calling 
   printf("We are back in main first call\n");
}
void add(int a, int b) //function calling 
{
  int result;
  printf("We are adding through  functions\n");
  result=a+b;
  printf("The result is= %d\n",result);

}
   



