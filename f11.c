//to copy from one file to another 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp=NULL,*fc=NULL;
 fp=fopen("f1.txt","r");
 fc=fopen("f2.txt","w");
    if(fp!=NULL&&fc!=NULL)
    {
        while(!feof(fp))
        {
            ch=fgetc(fp);
            fputc(ch,fc);
        }
       }
       else
      printf("no such file exist ");
      printf("file f2.txt created successfully !!! ");
   fclose(fp);
   fclose(fc);
    return 0;
}