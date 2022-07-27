#include<stdio.h>//no of tabs spaces in a file
main()
{
    FILE *fr;
    char ch;
    int count=0;
    fr=fopen("test 1.txt","r");
    do
    {
        ch=fgetc(fr);
        if(ch==' ')
        {
          count++;
        }
    }
    while(ch!=EOF);
    printf("%d",count);
    fclose(fr);

}
