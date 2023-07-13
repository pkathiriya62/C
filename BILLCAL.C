#include<stdio.h>
#include<conio.h>
void main()
{
float a;
clrscr();
printf("enter your unit:");
scanf("%f",&a);
if(a<100)
{
if((a*0.6)>50)
{
printf("your bill is:%f",(a*0.6));
}else{
printf("your bill is 50");}
}
else if(a>100&&a<300)
{
printf("your bill is %f",60+(a-100)*0.8);
}
else if(a>300)
{
if(220+(a-300*0.9)>300)
printf("your bill is:%f",220+((a-300)*0.9)+((220+((a-300)*0.9))*15)/100;
}
else
{
printf("your bill is:%f",60+160+(a-300)*0.9);
}
getch();
}