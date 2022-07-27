#include<stdio.h>
main()
{
    int x;
    int *p;
    x=10;
    printf("%d",x);
    p=&x;
    printf("\n%u",p);
    printf("\n%d",*p);
    printf("\n%d",sizeof(int));
    printf("\n%d",sizeof(char));
    printf("\n%d",sizeof(float));
}
