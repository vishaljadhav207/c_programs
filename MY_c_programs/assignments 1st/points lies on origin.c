//Given a point (x, y) , write a program to find out if it lies on the X-axis,
//Y-axis or on the origin.
#include<stdio.h>
main()
{
    float x,y;
    printf("enter (x,y):");
    scanf("%f%f",&x,&y);
    if(x==0&&y==0)
    {
        printf("point lies on both axis\n");
    }
    else if(y==0)
    {
        printf("point lies on x axis\n");
    }
    else if(x==0)
    {
        printf("point lies on y axis\n");
    }
    else
    {
        printf("point neither  lies on x and  y axis\n");
    }
}
