#include<stdio.h>
swap(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
main()
{
    int a,b;
    a=2;
    b=7;
    printf("\n%d %d",a,b);
    //add(&a,&b);
    swap(&a,&b);
    printf("\n%d %d",a,b);

}
