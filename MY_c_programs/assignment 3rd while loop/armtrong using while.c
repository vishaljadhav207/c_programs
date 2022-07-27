/*(b) Write a program to print out all Armstrong numbers between 1 and 500.
If sum of cubes of each digit of the number is equal to the number
itself, then the number is called an Armstrong number.
For example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3).*/
# include<stdio.h>
int main()
{
    int num,rem,sum;
    int    i=1;
    while(i<=500)
    {
        num=i;
        sum=0;
        while(num)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(i==sum)
        {
            printf("%d is a armstrong no \n",i);
        }
        i++;
    }
}
