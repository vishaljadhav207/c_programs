#include<stdio.h>
main()
{
    FILE *fp,*fw;
    char ch;
    fp=fopen("test 1.txt","r");
    fw=fopen("test 1.txt","w");
    do
    {
        ch=fgetc(fp);
        if(ch!=EOF)
        {
            fputc(ch,fw);
        }
    }
    while(ch!=EOF);
    fclose(fp);
    fclose(fw);
    printf("file copied!!!!!!");
}
