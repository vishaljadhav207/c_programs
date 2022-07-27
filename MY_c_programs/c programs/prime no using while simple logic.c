#include<stdio.h>
main()
{
    int i,n;
    printf("enter any no:\n");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            printf("not prime no");
            break;
        }
        i++;
        if(i==n)
        {
            printf("prime no");
        }
    }
}
