#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int i,n;
    printf("enter no of you need:\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter array items:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",arr+i);
    }
    printf("\n your array:");
    for(i=0;i<n;i++)
    {
       printf("%d",*(arr+i));
    }
  free(arr);
  arr=NULL;
}




