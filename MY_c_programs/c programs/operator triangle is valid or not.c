/*Write a program to check whether a triangle is valid or not,
 when the three angles of the triangle are entered through the keyboard. A triangle
is valid if the sum of all the three angles is equal to 180 degrees.*/
#include<stdio.h>
main()
{
int a1,a2,a3,sum;
printf("enter angles:");
scanf("%d%d%d",&a1,&a2,&a3);
sum=a1+a2+a3;
if(a1==60&&a2==60,a3==60)
{
    printf("triangle is valid");
}
else{
    printf("not");
}
}
