#include<stdio.h>
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
float area(float r)
{
    float a1;
    a1=3.14*r*r;
    return a1;
}
void sayhello()
{
    printf("\n hello world");
}
main()
{
    float x;
    int a;
    a=add(100,200);
    x=area(1.2);
    printf("%f",x);
    sayhello();
}










