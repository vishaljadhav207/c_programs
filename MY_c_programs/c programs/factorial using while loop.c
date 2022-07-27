#include <stdio.h>
int main()
{
    int i,n,b=1;
    printf("enter number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        b=b*i;
        i=i+1;

    }
    printf("%d",b);







    return 0;
}
