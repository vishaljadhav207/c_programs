#include<stdio.h>
#include<stdlib.h>
 main()
{
char *name;
int n,i;
printf("enter no of char present in your name:");
scanf("%d",&n);
name=(char *)malloc(n*sizeof(char));
scanf("%s",name);
i=0;
while(*(name+i)!='\0')
{
    printf("%c",*(name+i)-32);
    i++;
}

}

