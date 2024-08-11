#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch;
    int lines=0;
    FILE *fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("no such file exist \n");
        exit(0);
    }
    if(fp!=NULL)
    {
    while(!feof(fp))
    {
        ch=fgetc(fp);
       // if(ch!=EOF)
        {
            if(ch=='\n')
            lines++;
        }
    }
    }
    printf("no of lines in the file are :%d",lines);
    fclose(fp);
    return 0;
}