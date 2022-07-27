#include<stdio.h>
main()
{
  int i,n;
  printf("enter no");
  scanf("%d",&n);
  i=2;
  while(i<n)
  {
      if(n%i==0)

  {
 printf("not prime number");
  break;
}
i=i+1;
  }
    if(i==n)
{
printf("prime number");
}
}



