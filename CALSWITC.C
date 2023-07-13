#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter 1 to addison\n");
printf("enter 2 to substraction\n");
printf("enter 3 to multiplication\n");
printf("enter 4 to division\n");
printf("enter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
c=a+b;
printf("ans:%d",c);
break;
case 2:
c=a-b;
printf("ans:%d",c);
break;
case 3:
c=a*b;
printf("ans:%d",c);
break;
case 4:
c=a/b;
printf("ans:%d",c);
break;
default:
printf("enter valid num.");



}
getch();


}

