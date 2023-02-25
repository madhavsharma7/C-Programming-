//Palindrome number
#include <stdio.h>
int main()
{
int num, reverse = 0, remainder, originalN;
printf("Enter an integer: ");
scanf("%d", &num);
originalN = num;

while (num != 0)
{
remainder = num % 10;
reverse = reverse * 10 + remainder; //reverse a number
num/= 10;
}

if (originalN == reverse)
printf("%d is a palindrome.", originalN); // palindrome if orignal number and reverse are equal
else
printf("%d is not a palindrome.", originalN);

 return 0;
}