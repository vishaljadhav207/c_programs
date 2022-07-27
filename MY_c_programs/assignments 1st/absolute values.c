// Write a program to find the absolute value of a number entered through the keyboard.
#include<stdio.h>
#include<stdlib.h>
main()
{
    int num;
    printf("enter absolute number:");
    scanf("%d",&num);
    printf("absolute value of %d is %d\n ",num,abs(num));
}

