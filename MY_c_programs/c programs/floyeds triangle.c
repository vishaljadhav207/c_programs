#include<stdio.h>
main()
{
    int rows,i,j,number=1;
    printf("enter the no of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
     for(j=1;j<=i;++j) {
        printf("%d",number);
        ++number;
     }
     printf("\n");
    }
}
