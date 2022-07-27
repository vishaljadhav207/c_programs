#include<stdio.h>
main()
{
    int ch;
    float a,b,c;
    printf("1.add\n 2.sub\n 3.mul\n 4.div\n");
    printf("enter your choice:");
    scanf("%d",ch);
    printf("\n enter 2 number:");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
    case 1:
        c=a+b;
        printf("addition is :%f ",c);
        break;
    case 2:
        c=a-b;
        printf("sbstraction is :%f ",c);
        break;
    case 3:
        c=a*b;
        printf("multiplication is :%f ",c);
        break;
    case 4:
        c=a/b;
        printf("division is :%f ",c);
        break;
    }
}
