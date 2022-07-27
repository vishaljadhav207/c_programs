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
    printf("enter student id name and marks:\n");
    scanf("%d%s%f",&s1.id,&s1.name,&s1.marks);
    printf("\n your data :\n");
    printf("%d\t %s\t %f\t",s1.id,s1.name,s1.marks);
}
