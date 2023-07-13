#include<stdio.h>
#include<conio.h>
void main()
{
int maths,physics,chemistry;
float total,percentage;
clrscr();
printf("enter marks of maths:");
scanf("%d",&maths);
printf("enter marks of physics:");
scanf("%d",&physics);
printf("enter marks of chemistry:");
scanf("%d",&chemistry);
if(maths<35||chemistry<35||physics<35)
{
printf("you are fail");
}
else
{
total=maths+chemistry+physics;
printf("your total mark is:%f\n",total);
percentage=(total*100)/300;
printf("total percentage is :%f\n",percentage);
if(percentage>=75)
{
printf("\nyou got A grade");
}
else if(percentage>=60&&percentage<75)
{
printf("\nyou got B grade");
}
else if(percentage>=45&&percentage<60)
{
printf("\nyou got C grade");
}
else if(percentage>=35&&percentage<45)
{
printf("\n you got D grade");
}
}
getch();


}