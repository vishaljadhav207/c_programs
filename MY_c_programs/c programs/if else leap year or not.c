
#include<stdio.h>
main()
{
    int year;
    printf("enter any year:");
    scanf("%d",&year);
    //leap year if perfectly divisble by 400
    if(year%100==0)
    {

        if(year%400==0)
            printf("leap year\n");
        else
            printf("not leap year\n");
    }
    else if(year%4==0)
        printf("leap year\n");
    else
        printf("not leap year\n");
}

