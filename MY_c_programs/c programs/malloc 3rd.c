#include<stdio.h>
#include<stdlib.h>
 main()
{
char *name;
int n;
printf("enter no of char present in your name:");
scanf("%d",&n);
name=(char *)malloc(n*sizeof(char));
scanf("%s",name);
printf("hello %s",name);
}

