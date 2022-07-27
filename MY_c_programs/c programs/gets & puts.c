#include<stdio.h>
main()
{
    char string1 [15];
    char ch;
    int  i=0,n1=0,n2=0,x;
    puts("enter string");

    gets(string1);
    while(string1[i]!='\0')
    {
        x=string1[i];
        if(x>=65 && x<=90)
        {
            n1++;
        }
        else if(x>=97 && x<=122)
        {
            n2++;
        }
        i++;
    }
    printf("\n number of capital letters %d",n1);
    printf("\n number of small letters %d",n2);
}
