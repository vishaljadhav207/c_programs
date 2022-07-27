#include<stdio.h>
#include<stdlib.h>
main()
{
    int *a;
    float  *b;
    char *ch;

    int n=1;
    a=(int *)malloc(n*sizeof(int));
    b=(float*)malloc(n*sizeof(float));
    ch=(char*)malloc(n*sizeof(char));
    printf("enter values:");
    scanf("%d",a);
    scanf("%f",b);
    scanf(" %c",ch);
    printf("\nyour values:");
    printf("\n%d\n",*a);
    printf("\n%f\n",*b);
    printf("\n%c\n",*ch);
    return 0;
}
