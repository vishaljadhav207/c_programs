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
    char ch;
    struct student s1;
    fw=fopen(" students.txt","w");
    do
    {
        printf("\n enter data:");
        scanf("%d%s%f",&s1.id,&s1.name,&s1.marks);
        fprintf(fw,"%d\t %s\t %f\t",s1.id,s1.name,s1.marks);
        puts("do you want to continue(y/n):");
        ch=getche();
    }
    while(ch=='y');
    fclose(fw);
}


