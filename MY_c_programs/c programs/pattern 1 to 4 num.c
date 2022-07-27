#include<stdio.h>

main()
{
    int i,j;
    for(i=49; i<=52; i=i+1)
    {
        for(j=49; j<=i; j=j+1)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
