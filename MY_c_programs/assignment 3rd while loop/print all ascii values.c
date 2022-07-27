//(a) Write a program to print all the ASCII values and their equivalent characters using a while loop.
//The ASCII values vary from 0 to 255.
# include<stdio.h>
int main()
{
    char ch ;
     int i;
     i=0;
    while (i<=255)
    {
       printf("%c =%d\t",i,i);
       i++;
    }
}
