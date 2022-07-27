#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    fp=fopen("test 1.txt","r");
    do
    {
        ch=fgetc(fp);
        printf("%c",ch);

    }
    while(ch!=EOF);
    fclose(fp);

}
