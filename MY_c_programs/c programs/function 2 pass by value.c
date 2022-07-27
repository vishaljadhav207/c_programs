#include<stdio.h>
sqr(int x)
{
    int y;
    y=x*x;
    printf("square value is %d ",y);
    }
    fact(int n)
    {
        int i , f=1;
        for(i=1;i<=n;i=i+1)
        {
            f=f*i;
        }
        printf("\n fact value is %d ",f);
    }
 pow(int x,int y)
{
int power =1;
for (int i=1;i<=y;i++)
{
    power=power*x;
}
printf("\n power of num is%d",power);
}
main()
{
    sqr(10);
    fact(4);
    pow(10,3);
}

















