#include<stdio.h>//for eg 123=321;
main()
{
    int n,reverse= 0;
    printf("enter no:\n");
    scanf("%d",&n);
    while(n)
    {
      reverse=reverse*10;
      reverse=reverse +n%10;
      n=n/10;
    }
    printf("%d reverse num",reverse);
    return 0;
}
