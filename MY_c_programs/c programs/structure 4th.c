#include<stdio.h>
main()
{
struct student
{
  int id;
  char name[15];
  struct marks
  {
    int m1,m2;
  } ob;
};
main()
{
struct student s1;
printf("enter id and name:");
scanf("%d%s",&s1.id,&s1.name);
printf("enter marks:");
scanf("%d%d",&s1.ob.m1,&s1.ob.m2);
printf("\n your data");
printf("\n&d\t%s",s1.id,s1.name);
printf("\n&d\t%d"s1.ob.m1,s1.ob.m2);

}
