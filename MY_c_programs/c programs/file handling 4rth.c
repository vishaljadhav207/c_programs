#include<stdio.h>
struct student
{
    int id;
    char name[15];
    float marks;
};
main()
{
    FILE *fr;
    struct student s1;
    fr=fopen(" students.txt","r");
    fscanf(fr,"%d%s%f",&s1.id,&s1.name,&s1.marks);
    printf("\nfile data:\n");
    printf("%d\t %s\t %f\t",s1.id,s1.name,s1.marks);
    fclose(fr);

}

