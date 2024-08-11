//read a file and transfer the allphabets to another file by capitalising it
//to copy from one file to another 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
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
          //  if(ch!=EOF)
            
                //if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))      //  OR    if(isalpha(ch))
                if(isalpha(ch)||isspace(ch))
                {
                 //fprintf(fc,"%c",toupper(ch));
                 fputc(toupper(ch),fc);
        
                }
            
          // else
           //break;
        }
       }
       else
      printf("no such file exist ");
      printf("alphabets are transferred by capitalising them to file f2.txt !!! ");
   fclose(fp);
   fclose(fc);
    return 0;
}