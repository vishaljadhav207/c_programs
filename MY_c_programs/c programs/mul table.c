
#include<stdio.h>

main()
{
    int i,a,b;
    printf("enter number");
    scanf("%d",&a);
    i=1;
    while(i<=10)
    {
        b=a*i;
        printf("%d\n",b);
        i=i+1;
    }
}
