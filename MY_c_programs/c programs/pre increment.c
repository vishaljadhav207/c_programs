//Program to use the pre-increment operator in C

#include <stdio.h>
#include <conio.h>
int main ()
{
 // declare integer variables
int x, y, z;
printf (" Input the value of X: ");
scanf (" %d", &x);
printf ("  Input the value of Y: ");
scanf (" %d", &y);
printf (" Input the value of Z: ");
scanf (" %d", &z);
// use pre increment operator to update the value by 1
++x;
++y;
++z;

printf (" \n The updated value of the X: %d ", x);
printf (" \n The updated value of the Y: %d ", y);
printf (" \n The updated value of the Z: %d ", z);
return 0;
}
