//(d) Write a program to enter numbers till the user wants.
// At the end it should display the count of positive, negative and zeros entered.
#include<stdio.h>
int main()
{
int limit,num,positive=0,negative=0,zeros=0;
printf("enter the limit:");
scanf("%d",&limit);
printf("enter %d numbers:\n",limit);
while (limit)

{
    scanf("%d",&num);
    if(num>0)
    {
      positive++;
    }
    else if(num<0)
    {
     negative++;
    }
    else
    {
     zeros++;
    }
    limit--;
}
printf("\n positive numbers %d\n",positive);
printf("\n negative numbers %d\n ",negative);
printf("\n zeros %d\n",zeros);
return 0;
}