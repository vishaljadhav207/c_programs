
//(f) Write a program to find the range of a set of numbers entered through the keyboard.
// Range is the difference between the smallest and biggest
//number in the list.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int small,big,num,range,limit;
    printf("enter the limit:\n");
    scanf("%d",&limit);
    printf("enter the number %d",limit);
    scanf("%d",&num);
    small=big=num;
    limit=limit-1;
    while (limit)
    {
        scanf("%d",&num);
        if(num>big)
        {
            big=num;
        }
         if(num<small)
        {
            small=num;
        }
        limit--;
    }
    range=big-small;
    printf("small number=%d\nbig number=%d\n",small,big);
    printf("range is %d\n",abs(range));
    return 0;

}






