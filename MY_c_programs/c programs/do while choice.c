
#include<stdio.h>
#include<conio.h>

main()
{
    int  a,b,c;
    char choice;
    do
    {
        printf("\n enter  2 number");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\n addition is %d",c);
        printf("\n do you want to continue?(y/n):");
       // choice =getch();
        choice =getche();
    }
    while(choice=='y');
}





