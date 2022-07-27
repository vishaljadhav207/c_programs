#include<stdio.h>//for eg 153=1*1*1+5*5*5+3*3*3
main()
{
    int n,r,sum=0,store=n;
    printf("enter 3 digit num:\n");
    scanf("%d",&n);
    store=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(store==sum)

    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}
