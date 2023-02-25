#include<stdio.h>
#include<conio.h>
int main()
{
    char flag;
    /* Our first simple C basic program */
    printf("Hello World! ");
    printf("Do you want to continue Y or N\n");
    flag = getche();
    if (flag == 'Y','y')
    {
       printf("\nYou have entered Yes\n");
    }
    else
    {
       printf("\nYou have entered No\n");
    }
    return 0;
}
