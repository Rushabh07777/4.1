#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 printf("Enter The Number");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("a=%d\nb=%d\n",a,b);
 getch();
 }
