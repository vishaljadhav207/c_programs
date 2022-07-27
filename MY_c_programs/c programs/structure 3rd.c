
#include<stdio.h>

struct student
{
    int id;
    char name[15];
    float marks;
};
main()
{
    int i;
    struct student s[3];
    struct student s1;
    printf("enter student id name and marks:\n");
    for(i=0; i<3; i++)
    {
        scanf("%d%s%f",&s[i].id,&s[i].name,&s[i].marks);
    }
    printf("\n your data:\n");
    for(i=0; i<3; i++)
    {
        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].marks);
    }
}

