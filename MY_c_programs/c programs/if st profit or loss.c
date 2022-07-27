#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("enter cp & sp");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
        printf("profit %f\n",p);


    if(l<0)
        printf("loss%f\n",l);

    if(p==0)
        printf("no profit no loss");
}
