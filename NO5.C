#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,calc;
 clrscr();
 printf("Enter The Number");
 scanf("%d%d",&a,&b);
 calc=(a*a*a)-3*(a*a*b)+3*(a*b*b)-(b*b*b);
 printf("%d",calc);
 getch();
 }