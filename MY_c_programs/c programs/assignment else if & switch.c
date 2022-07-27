#include<stdio.h>

main()
{
    int x;
    scanf("%d",&x);

    if(x==11)
    {
        printf("eleven");
    }
    else if(x==12)
    {
        printf("twelve");

    }
    else if(x==13)
    {
        printf("twelve");

    }
    else if(x==14)
    {
        printf("twelve");

    }
    else if(x==15)
    {
        printf("twelve");

    }
    else if(x==16)
    {
        printf("twelve");

    }
    else if(x==17)
    {
        printf("seventeen");

    }
    else
    {
        int i=x/10;
        int j=x%10;

        switch (i)
        {
        case 1:
            printf("eighteen");
            break;
        case 2 :
            printf("ninteen");
            break;
        case 3:
            printf("twenty");
            break;
        case 4:
            printf("twenty one");
            break;
        case 5:
            printf("twenty two");
            break;
        case 6:
            printf("twenty three");
            break;
        case 7:
            printf("twenty foure");
            break;
        }
        switch (j)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        }
    }
}




























