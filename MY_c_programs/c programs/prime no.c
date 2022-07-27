#include<stdio.h>//those no which cannot divided by any number other than 1 and itself are called prime no:eg=2,3,5,7
main()
{
    int i,n,flag=1;
    printf("enter number:\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
        if(flag){
            printf("%d is a prime number",n);
        }
        else{
             printf("%d is not a prime number",n);
        }
        return 0;
    }
}
