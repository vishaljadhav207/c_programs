#include<stdio.h>//for eg 123=321;
main()
{
    int n,rem;
    printf("enter no:\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
    return 0;
}
