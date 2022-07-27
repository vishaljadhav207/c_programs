#include<stdio.h>

main()
{
    int n,prev=0,next=1,r,i;
    printf("enter how many terms of fibonacci series");
    scanf("%d",&n);
    printf("%d%d",prev,next);
    i=3;
    while(i<n)
    {
        r=prev+next;
        printf("%d",i,r);
        prev=next;
        next=r;
        i++;
    }

}





