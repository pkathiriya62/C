#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("enter age:");
scanf("%d",&age);
if(age>=18)
{
printf("you are eligible to drive");
}
else
{
printf("you are not eligible to drive");
}
getch();


}