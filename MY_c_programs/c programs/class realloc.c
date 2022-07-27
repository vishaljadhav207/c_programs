#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int n1,n2,i;
    printf("enter no of items you need:\n");
    scanf("%d",&n1);
    arr=(int *)malloc(n1*sizeof(int));
    printf("enter array items :\n");
    for(i=0; i<n1; i++)
    {
        scanf("\n%d",arr+i);
    }
    printf("\n your array:\n");
    for(i=0; i<n1; i++)
    {
        printf("\n%d",*(arr+i));
    }
    printf("\\ enter new size:");
    scanf("%d",&n2);
    arr=(int *)realloc(arr,n2*sizeof(int));
    printf("enter new array items:\n");
    for(i=n1; i<n1+n2; i++)
    {
        scanf("\n&d",arr+i);
    }
    printf("\n your array:\n");
    for(i=0; i<n1+n2; i++)
    {
        printf("\n%d",*(arr+i));
    }
    free(arr);
    arr=NULL;
}
