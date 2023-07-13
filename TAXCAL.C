#include<stdio.h>
#include<conio.h>
void main()
{
float a;
clrscr();
printf("enter your salary:");
scanf("%f",&a);
if(a<2500)
{
printf("your tax is zero");
}
else if(a>2500&&a<5000)
{
printf("your tax is:%f",(a-2500)*0.1);
}
else if(a>5000&&a<10000)
{
printf("your tax is:%f",250+((a-5000)+20)/100);
}
else if(a>10000)
{
printf("your tax is:%f",2500+1000+(a-10000)*0.3);
}
getch();
}
