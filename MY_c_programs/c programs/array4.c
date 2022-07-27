#include<stdio.h>
main()
{
    char arr[5];
    int i;
    printf("enter array:");
    for(i=0; i<5; i=i+1)
    {
        scanf("%c",&arr[i]);

    }
    printf("\nyour array:");
    for(i=0; i<5; i=i+1)
    {
        printf("\n%c",arr[i]+32);

    }



}

