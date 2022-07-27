#include<stdio.h>
main()
{
char fname[15];
int i=0;
printf("\n enter your name");
scanf("%s",fname);
while(fname[i]!='\0')
{
   i=i+1;
}
i=i-1;
while(i>=0)
{
  printf("%c",fname[i]);
  i=i-1;
}
}
