#include<stdio.h>
main()
{
char fname[15];
int i=0;
printf("\n enter your name");
scanf("%s",fname);
while(fname[i]!='\0')
{
    printf("%c",fname[i]);
    i=i+1;

}
printf("\n length of the string : %d",i);
}
