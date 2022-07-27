#include<stdio.h>//5=5*4*3*2*1=120;
main()
{
    int n,i,fact=1;
    printf("enter number:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
printf("factorial value of %d =%d\n",n,fact);
}
//----------------------------------------------------------
// #include<stdio.h>//5=5*4*3*2*1=120;
// main()
// {
//     int n,i,fact=1;
//     printf("enter number:\n");
//     scanf("%d",&n);
//    for(i=1;i<=n;i++)
//     {
//       fact=fact*i;
      
//     }
//       printf("factorial value of %d =%d\n",n,fact);
// }
