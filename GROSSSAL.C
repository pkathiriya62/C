#include <stdio.h>
#include <conio.h>
void main()
{
    float basic;
    clrscr();
    printf("enter basic salary:");
    scanf("%f", &basic);
    if (basic < 5000)
    {
        printf("gross salary is:%f", basic + (8 * basic) / 100 + (basic * 20) / 100);
    }
    else if (basic > 5000 && basic < 10000)
    {
        printf("gross salary is:%f", basic + (12 * basic) / 100 + (30 * basic) / 100);
    }
    else if (basic > 10000 && basic < 15000)
    {
        printf("gross salary is:%f", basic + (basic * 15) / 100 + (basic * 40) / 100);
    }
    else if (basic > 15000)
    {
        printf("your gross salary is:%f", basic + (20 * basic) / 100 + (50 * basic) / 100);
    }
    getch();
}