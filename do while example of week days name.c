#include<stdio.h>
int main()
{
    int ch;
    do
    {
    printf("enter the number of day for checking name of the day\n");
    printf("1.     Sunday\n");
    printf("2.     monday \n");
    printf("3.     Tuesday\n");
    printf("4.     Wednesday\n");
    printf("5.     thursday\n");
    printf("6.     Friday\n");   
    printf("7.     Saturday\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("sunday\n");
        break;
        case 2: printf("Monday\n");
        break;
        case 3: printf("Tuesday\n");
        break;
       case 4: printf("Wednesday\n");
        break;   
       case 5: printf("Thursday\n");
        break;   
        case 6: printf("Friday\n");
        break;   
        case 7: printf("Saturday\n");
        break;
    default :
        printf("wrong choice");
    }
    }
	while(ch!=9);
    return 0;
}