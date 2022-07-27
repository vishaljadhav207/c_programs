
#include<stdio.h>

struct student
{
    int id;
    char name[15];
    float marks;
};
main()
{
    FILE *fw;
    struct student s1;
    fw=fopen(" students.txt","w");
    printf("enter data:");
    scanf("%d%s%f",&s1.id,&s1.name,&s1.marks);
    printf("writing data to file");
    fprintf(fw,"%d\t %s\t %f\t",s1.id,s1.name,s1.marks);
    fclose(fw);

}
