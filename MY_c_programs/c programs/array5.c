#include<stdio.h>
main()
{
    int arr[5];
    int i=0,n;
    printf("enter no");
    scanf("%d",&n);
    while(i>=0)
    {
        arr[i]=n%2;
        n=n/2;
        i=i+1;

    }
    i=i-1;
    while(i>=0)
    {
        printf("%d",arr[i]);
        i=i-1;
    }
}
