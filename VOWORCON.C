#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter character:");
scanf("%c",&ch);
if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==65||ch==69||ch==73||ch==79||ch==85)
{
printf("character is vowel");
}
else
{
printf("character is consonant");
}
getch();


}