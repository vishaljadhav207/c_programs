#include<stdio.h>//probl
main()
{
    int num=0,n5,n4,n3,n2,n1,sum;

    printf("enter 5 digit num/n:");
    scanf("%d",&num);

    n5=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n1=num%10;
    num=num/10;
    sum=100000*n5+n4*10000+n3*1000+n2*100+n1*10+num;

 if(num==sum)
    {
        printf("%d", palindrome number",num);

    }
    if(num!=sum)
    {
        printf("%d", not palindrome",num);
    }

}



