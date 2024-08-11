//to append to files
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    FILE *fp=NULL,*fc=NULL;
char st[10]="btech" ,ch='C',chr,str[10];
    fp=fopen("wrd1.txt","a+");
     fc=fopen("f1.txt","r");
    if(fp==NULL&&fc==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    if(fp!=NULL&&fc!=NULL)
    {
      while(!feof(fp))
      {
         fputc(ch,fp);
      }
        while(!feof(fc))
        {
            chr=fgetc(fc);
            fputc(chr,fp);
        }
    }

    fclose(fp);
    fclose(fc);
    return 0;
}