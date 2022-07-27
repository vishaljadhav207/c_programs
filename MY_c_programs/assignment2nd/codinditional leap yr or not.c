//(b) Write a program using conditional operators to determine whether a year entered through
 //the keyboard is a leap year or not.
#include<stdio.h>
main()
{
    int year;
    printf("enter year:\n");
    scanf("%d",&year);
    ((year%400==0)||
     (year%100==0)||
     (year%4==0)
     )?
     printf("leap year\n"):
     printf("not leap year\n");


}
