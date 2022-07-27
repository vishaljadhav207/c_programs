#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int i,n1,sum=0;
    printf("enter no of you need:\n");
    scanf("%d",&n1);
    arr=(int*)malloc(n1*sizeof(int));
    printf("enter array items:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d\n",arr+1);
    }
    printf("\nyour array:");
    for(i=0;i<n1;i++)
    {
        sum=sum+*(arr+1);
    }
    printf("addition is %d",sum);
}

