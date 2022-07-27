#include<stdio.h>
main()
{
    int t1=0,t2=1,nextterm=0,n;
    printf("enter a positive number:");
    scanf("%d",&n);
    //display the first two terms which is always 0 and 1
    printf("fibonacci series:%d,%d,",t1,t2);
    nextterm=t1+t2;
    while(nextterm<=n)
    {
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
}
