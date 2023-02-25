#include<stdio.h>  
int main()
{  
   FILE *fp;  
   fp = fopen("file1.txt", "w");
   fputc('P',fp); 
   fclose(fp); 
}  