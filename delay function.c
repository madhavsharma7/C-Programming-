#include<stdio.h>
#include<time.h>
int delay(int number_of_seconds) 
{ 
    int nano_seconds = 1000*number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time +nano_seconds); 
} 
int main() 
{ 
    int i, n; 
    printf("Enter delay time(seconds) ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
	 { 
        delay(1); 
        printf("%d Seconds have passed\n",i+1); 
    } 
  
}
