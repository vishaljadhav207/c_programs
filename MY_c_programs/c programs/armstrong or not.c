#include<stdio.h>
main()
{
    int n,r,sum=0,temp;
    printf("enter 3 digit num");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum)
         {
        printf("armstrong");
    }
    else
    {
         printf("not armstrong");
    }

}
