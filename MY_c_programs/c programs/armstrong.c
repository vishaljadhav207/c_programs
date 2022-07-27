#include<stdio.h>

main()
{
    int a,b,c,d,e,f;
    printf("enter 3 digit number:");
    scanf("%d",&a);
    b=a/100;

    c=a%100;
    d=c/10;
    e=c%10;
    f=b*b*b+e*e*e+d*d*d;

    if(a==f)
    {
        printf("armstrong number");

    }
    else
    {
     printf("not armstrong number");

    }
    }

