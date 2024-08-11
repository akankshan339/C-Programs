//to merge two files 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp=NULL,*fc=NULL,*fm=NULL;
 fp=fopen("f1.txt","r+");
 fc=fopen("f2.txt","r+");
fm=fopen("f3.txt","w+");
    if(fp!=NULL&&fc!=NULL&&fm!=NULL)
    {
        while(!feof(fp))
        {
            ch=fgetc(fp);
            fputc(ch,fm);
        }
         while(!feof(fc))
        {
            ch=fgetc(fc);
            fputc(ch,fm);
        }
       }
     //  else
     // printf("no such file exist ");
     // printf("file f2.txt created successfully !!! ");
   fclose(fp);
   fclose(fc);
   fclose(fm);
    return 0;
}