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
    printf("\nfile data:\n");
    while(fscanf(fr,"%d %s %f",&s1.id,&s1.name,&s1.marks)>0)
    {
        printf("\n%d\t %s\t %f",s1.id,s1.name,s1.marks);
    }
    fclose(fr);
}

