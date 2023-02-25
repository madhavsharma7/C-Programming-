#include<stdio.h>  
int main()
{  
   FILE *fp;  
   int length;
   fp = fopen("Abc.text","w");   
   fseek(fp,7, SEEK_SET);   
   fputs("HELLO HELLO HELLO ", fp);
   length=ftell(fp);
   printf("file point is at  %d\n",ftell(fp));
   fclose(fp); 
   printf("Length of file =%d bytes \n", length); 
}