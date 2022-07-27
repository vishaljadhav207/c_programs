#include<stdio.h>
struct student
{
    int id;
    char name[15];
    float marks;
};
main()
{
struct student s1={100,"vjd",90};
printf("\n your data:\n");
printf("\n%d\t %s\t %f",s1.id,s1.name,s1.marks);


}
