//Given three points (x1, y1) , (x2, y2) and (x3, y3) ,
//write a program to check if all the three points fall on one straight line.
//formula=m=(y2-y1)/(x2-x1);
//                   n=(y3-y2)/(x3-x2);
#include<stdio.h>
main()
{
    float x1,y1,x2,y2,x3,y3,m,n;

        printf("enter points (x1,y1)\n");
    scanf("%f%f",&x1,&y1);
    printf("enter points (x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    printf("enter points (x3,y3)\n");
    scanf("%f%f",&x3,&y3);
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n)
    {
        printf("all 3 points lies on same points\n");
    }
    else
    {
       printf("all 3 points not lies on same points\n");
    }
}
