
#include<stdio.h>

main()
{
    int i,j;
    for(i=1;i<=4;i=i+1)
    {
     for(j=4;j>=i;j=j-1)
    {
        printf("*");

    }
    printf("\n");
}
}
