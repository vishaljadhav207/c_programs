#include<stdio.h>
main()
{
 int arr[5];
int i,n,flag=0;
printf("enter array");
for(i=0;i<5;i=i+1)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i=i+1)
{
    printf("\n%u=%d",arr+i,*(arr+i));
}

}
