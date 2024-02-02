#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("Enter the number");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("%d%d",a,b);
 getch();
}

