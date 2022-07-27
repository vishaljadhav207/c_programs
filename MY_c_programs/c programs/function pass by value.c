#include<stdio.h>
show(char x)
{
    printf("\n%c",x);
}
disp(int x,float y,char z)
{
    printf("\n%d%f%c",x,y,z);
}
add(int x,int y)
{
    int c;
    x=x+1;
    y=y+1;
    c=x+y;
    printf("\n addition is %d ",c);
}
main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",a,b);
    show('Q');
    disp(100,1.2, 'p' );
}










