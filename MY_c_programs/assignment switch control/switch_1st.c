/*Write a menu driven program which has following options:
Factorial of a number
Prime or not
Odd or even
Exit
Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear.
 Unless the user
selects the ‘Exit’ option the program should continue to work.
Program
/* Menu driven program */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, i, fact;
    while (1)
    {
        printf("\n 1.factorial\n");
        printf(" 2.prime/not\n");
        printf(" 3.odd or not\n");
        printf(" 4.exit\n");
        printf("your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter number:\n");
            scanf("%d", &num);
            fact = 1;
            for (i = 1; i <= num; i++)
                fact = fact * i;
            printf("factorial of = %d\n ", fact);
            break;
        case 2:
            printf("enter number:\n");
            scanf("%d", &num);
            for (i = 2; i <= num; num++)
            {
                if (num % i == 0)
                {
                    printf("not prime no\n");
                    break;
                }
            }
            if (i == num)
                printf("prime number\n");
            break;
        case 3:
            printf("enter number:\n");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
            break;
        case 4:
            exit(0);
        default:
            printf("wrong choice!\a\n");
        }
    }
    return 0;
}