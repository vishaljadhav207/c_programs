//(c) Write a program to find the greatest of
//the three numbers entered through the keyboard. Use conditional operators.
#include<stdio.h>
main()
{
  int  n1,n2,n3,greatest;
  printf("enter number:\n");
  scanf("%d%d%d",&n1,&n2,&n3);
  greatest=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
  printf("the greatest num is:%d",greatest);
}
