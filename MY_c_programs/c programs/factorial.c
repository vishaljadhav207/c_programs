#include<stdio.h>//Write a program to find the factorial value of any number
                                     // entered through the keyboard.//factorial values=5=5*4*3*2*1=120;
                                     //logic:      //i-fact
                                                  // 1-1
                                                //   2-2
                                                  //  3-6
                                                   //  4-24
{
int main()   
{
int num, i, fact;
printf ("Enter a number:");
scanf ("%d", &num);
fact = i = 1;
while (i <= num)
{
fact = fact * i;
i++;
}
printf ("Factorial value of %d = %d\n", num, fact);
return 0;
}