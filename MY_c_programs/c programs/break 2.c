#include<stdio.h>
main()
{
    int i,j;
    for (i=1;i<=5;i=i+1)
    {
        for (j=1;j<=5;j=j+1)
        {
            if(i==3)
            {
                break;
            }
            printf("\n%d %d",i,j);
        }
    }
}
