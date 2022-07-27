#include<stdio.h>
void show(int*p)
{
    int i;
    printf("in function\n");
  for(i=0;i<5;i=i+1)
  {
      printf("\n%u=%d",p+i,*p+i);
  }

}
main()
{
int arr[5];
int i,n,flag=0;
printf("enter array");
for(i=0;i<5;i=i+1)
{
    scanf("%d",&arr[i]);
}
show(arr);
}
