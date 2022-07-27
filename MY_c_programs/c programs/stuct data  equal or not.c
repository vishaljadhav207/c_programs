#include<stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
main()
{
    struct date s1,s2,s3;
    printf("enter date 1:\n");
    scanf("%d%d%d",&s1.day,&s1.month,&s1.year);
    printf("\n enter date 2 :\n");
    scanf("%d %d %d",&s2.day,&s2.month,&s2.year);
    if(s1.day==s2.day && s1.month==s2.month && s1.year==s2.year)
    {
        printf("equal dates");
    }
    else
    {
        printf("not equal dates");
    }
}
