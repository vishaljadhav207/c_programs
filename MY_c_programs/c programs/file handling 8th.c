#include<stdio.h>//no of lines in a file
main()
{
    FILE *fr;
    char ch;
     int count=0;
    fr=fopen("test 1.txt","r");
    do
    {
        ch=fgetc(fr);
        if(ch=='\n')
    {
     count++;
    }

    }
   while(ch!=EOF);
    printf("%d",count);
    fclose(fr);
}
