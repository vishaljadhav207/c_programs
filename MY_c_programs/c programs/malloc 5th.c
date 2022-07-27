#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    char name[15];
    float marks;
};
main()
{
    int n,i;
    struct student *s1;
    printf("enter no of student data we need:");
    scanf("%d",&n);
    s1=(struct student *)malloc(sizeof(struct student));
    printf("enter data:");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%f",&(s1+i)->id,&(s1+i)->name,&(s1+i)->marks);
    }
    printf("your data:");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t%s\t%f",(s1+i)->id,(s1+i)->name,(s1+i)->marks);
    }
}
