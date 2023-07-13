#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
if(x>2000&&x<3000)
{
printf("%d\n",x);
}
else
{
printf("enter valid value\n");
}
if(y>100&&y<500)
{
printf("%d\n",y);
}
else
{
printf("enter valid value\n");
}
getch();

}
