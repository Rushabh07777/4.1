#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,calc;
 clrscr();
 printf("Enter The Number");
 scanf("%d%d",&a,&b);
 calc=(a*a)+(b*b)+2*(a*b);
 printf("%d",calc);
 getch();
 }