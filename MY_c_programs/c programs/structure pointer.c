#include<stdio.h>
struct student
{
    int id;
    char name[15];
    float marks;
};
main()
{
    struct student s1;
    struct student *p;
    p=&s1;
    printf("enter id and name and marks:\n");
    scanf("%d%s%f",&p->id,&p->name,&p->marks);
    printf("\n your data:\n");
    printf("\n%d\t%s\t%f",p->id,p->name,p->marks);
}
