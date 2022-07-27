#include<stdio.h>
int main()
{

    int n,sum=0;
    int i=1;
    printf("enter no:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
        prinf("%d",sum);
    }
    return 0;
}

