// Given the length and breadth of a rectangle,
//write a program to find whether the area of the rectangle is greater than its perimeter. For
//example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
#include<stdio.h>
main()
{
int length=5;
int breadth=7;
int area=length*breadth;
int perimeter=2*(length+breadth);
if(area>perimeter)
{
    printf("area %d is grater than its perimeter %d \n",area,perimeter);
}
else
{
  printf("area %d is not grater than its perimeter %d \n",area,perimeter);
}
}
//if float values then
/*if(area>perimeter)
{
    printf("area (%0.2f) is grater than its perimeter(%0.2f)\n",area,perimeter);
}
else
{
  printf("area (%0.2f) is not grater than its perimeter (%0.2f)\n",area,perimeter);
}*/







