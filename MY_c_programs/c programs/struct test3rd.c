 #include<stdio.h>
struct test
{
    char a;
    char b;
    int c;
};
main()
{
    printf("%d",sizeof(struct test));
}
//output is 8

