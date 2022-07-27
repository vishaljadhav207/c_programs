/*Given the coordinates (cx, cy) of center of a circle and its radius,
 write a program that will determine whether a point lies inside the circle, on the
circle or outside the circle. (Hint: Use sqrt() and pow() functions)*/
//formula for calculate distance[distance=sqrt(pow((x-cx),2)+pow((y-cy),2));]
#include<stdio.h>
#include<math.h>
main()
{
    float cx,cy,x,y,radius,distance;
    printf("enter the centr point(cx,cy):\n");
    scanf("%f%f",&cx,&cy);
    printf("enter radius of circle:\n");
    scanf("%f",&radius);
    printf("enter points(x,y):");
    scanf("%f%f",&x,&y);
    distance=sqrt(pow((x-cx),2)+pow((y-cy),2));
    if(distance<radius)
    {
        printf("point (%0.2f,%0.2f) is inside the circle\n",x,y);
    }
    else if(distance>radius)
    {
        printf("point (%0.2f,%0.2f) is outside the circle\n",x,y);
    }
    else
    {
        printf("point (%0.2f,%0.2f) is on the circle\n",x,y);
    }
}



