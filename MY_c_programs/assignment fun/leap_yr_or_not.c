#include<stdio.h>//(a) Any year is entered through the keyboard.
// Write a function to determine whether the year is a leap year or not.
#include<stdbool.h>
bool leap(int);//fun prototype
int main()
{
    int year;
    printf("enter year:\n");
    scanf("%d",&year);
    //fun call leap(year)
    if(leap(year))
    {
        printf("leap year:\n",year);
    }
    else
    {
        printf("not leap year:\n",year);
    }
    return 0;

}
//fun defination
bool leap(int year)
{
    if(year%100==0)
    {
        if(year%400==0)
            return true;
        else
            return false;
    }
    else
    {
        if(year%4==0)
            return true;
        else
            return false;

    }
}
