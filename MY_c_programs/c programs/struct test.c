#include<stdio.h>
struct test
{
    int a;
    char b;
};
main()
{
    printf("%d",sizeof(struct test));
}
//output is 8
