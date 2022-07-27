
#include<stdio.h>
#include<string.h>
main()
{
    char string1[15];
    char ch;
    int i=0,count=0;
    puts("enter string:");

    gets(string1);
    printf("enter char to count:");
    scanf("%c",&ch);
    while(string1[i]!='\0')
    {
        if(string1[i]==ch)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}




