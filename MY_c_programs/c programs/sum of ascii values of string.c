#include<stdio.h>
main()
{
    int sum=0;
    char name[20];
    int i =0;
    printf("enter name:");
    scanf("%s",name);
    while(name[i]!='\0')
    {
        printf("\nthe ascii values of char %c is %d",name[i],name[i]);
        sum=sum+name[i];
        i++;
    }
    printf("\n sum of ascii values of string is :%d",sum);
}
