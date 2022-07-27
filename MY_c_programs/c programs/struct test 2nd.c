#include<stdio.h>
struct test
{
    char b;
    int a;
    char c;

};
main()
{
    printf("%d",sizeof(struct test));
}
//output is 12
