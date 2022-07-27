#include<stdio.h>
main()
{
    int arr[5];
    int i;
    printf("enter array:");
    for(i=0;i<5;i=i+1)
    {
        scanf("%d",&arr[i]);

    }
    printf("\nyour array:");
    for(i=4;i>=0;i=i-1)
    {
        printf("\n%d",arr[i]);

    }



}

