
#include<stdio.h>

main()
{
   int a,b,sum=0;
   printf("enter number");
   scanf("%d",&a);
   while(a>0)
   {
    b=a%10;
    sum=b+sum;
    a=a/10;

   }
   printf("%d\n",sum);

}
