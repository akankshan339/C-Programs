//to write a chracter to the file 
//to write a chracter using fputc() function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char ch='U';
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    fputc(ch,fp); 
    fputc('V',fp);
   fclose(fp);
    return 0;
}