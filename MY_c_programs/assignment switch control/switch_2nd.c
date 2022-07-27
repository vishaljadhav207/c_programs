#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice;
    float a,b,c;
    while(1)
    {
        printf("\n 1.addition");
        printf("\n 2.subtraction");
        printf("\n 3.multiplication");
        printf("\n 4.division");
        printf("\n 5.exit\n");
        printf("your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter num\n");
            scanf("%f%f",&a,&b);
            c=a+b;
            printf("\n addition is:%f",c);
            break;
             case 2:
            printf("enter num\n");
            scanf("%f%f",&a,&b);
            c=a-b;
            printf("\n subtraction is:%f",c);
            break;
             case 3:
            printf("enter num\n");
            scanf("%f%f",&a,&b);
            c=a*b;
            printf("\n multiplication is:%f",c);
            break;
             case 4:
            printf("enter num\n");
            scanf("%f%f",&a,&b);
            c=a/b;
            printf("\n divition is:%f",c);
            break;
             case 5:
            exit(0);
            break;
            default:
            printf("wrong choice!\a\n");


        }
        
    }
return 0;
}