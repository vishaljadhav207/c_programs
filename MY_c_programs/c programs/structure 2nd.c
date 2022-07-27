#include<stdio.h>

struct student
{
    int day;
    int month;
    int year;
};
main()
{
    struct student s1;
    printf("enter date month and year:\n");
    scanf("%d%d%d",&s1.day,&s1.month,&s1.year);
    printf("\n your data :\n");
    printf("%d- %d- %d",s1.day,s1.month,s1.year);
}
