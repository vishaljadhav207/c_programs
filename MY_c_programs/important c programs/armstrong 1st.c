#include<stdio.h>//for eg 153=1*1*1+5*5*5+3*3*3
main()
{
    int a,b,c,d,e,f;
    printf("enter 3 digit:\n");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    f=b*b*b+e*e*e+d*d*d;
    if(a==f)
    {
        printf("armstrong");
    }
    else
        {
         printf(" not armstrong");
        }
}
