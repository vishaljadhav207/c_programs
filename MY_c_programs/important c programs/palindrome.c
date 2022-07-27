#include<stdio.h>//no original and reverse are equal are known as palindrome num//11,121,454
main()
{
    int n,original,reverse=0,rem;
    printf("enter number:\n");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        reverse=rem+(reverse*10);
        n=n/10;
    }
    if(original==reverse)
    {
         printf("%d is a palindrome",original);
    }
    else{
        printf("%d is not palindrome.",original);
    }
}
