#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter first no.:");
scanf("%d",&a);
printf("enter seccond no.:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a after swap:%d",a);
printf("b after swap:\n%d",b);
getch();
}