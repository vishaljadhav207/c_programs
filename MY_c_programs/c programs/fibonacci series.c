#include<stdio.h>//sequence where the next term is sum of previous two term.first 2 term
main()                                    //of fibonacci sequence are 0 followed by 1
{
    int i,n;
    //initialize first and second terms
    int t1=0,t2=1;
    //initialize the nextterm(3rd term)
    int nextterm=t1+t2;
    //get no.of term from user
    printf("enter the no of terms:\n");
    scanf("%d",&n);
    //print the no of two terms t1&t2
    printf("fibonacci series:  %d ,%d,",t1,t2);
    //print 3rd to nth terms
    for(i=3;i<=n;++i)
    {
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        }
}
