//(2) Whether a character entered through the keyboard is a special symbol or not.
//ascii code for special symbol
//0-47;58-64;91-96;123-255;

#include<stdio.h>
main()
{
    char ch;
    printf("enter any character:\n");
    scanf("%c",&ch);
    ((ch>=0&&ch<=47)||
       (ch>=58&&ch<=64)||
       (ch>=91&&ch<=96)||
       (ch>=123)
       )?
       printf("char enter is special symbol\n"):
           printf("char enter is not special symbol\n");

}
