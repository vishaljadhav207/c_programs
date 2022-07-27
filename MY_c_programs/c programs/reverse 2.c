#include<stdio.h>//for eg 123=321;
main()
{
int n,rem,reverse=0;
printf("enter the no:\n");
scanf("%d",&n);
while(n!=0)
{
   rem=n%10;
   reverse=reverse*10+(rem);
   n=n/10;
}
printf("%d is a reverse no",reverse);
}
