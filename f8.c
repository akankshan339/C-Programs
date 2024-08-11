//to read and write a chracter and string to the file 
//to read and write a (string and chracter) using fputs() and fputc() function in the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char st[5]="btech" ,ch='C',chr,str[10];
    fp=fopen("f1.txt","r+");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    fputs(st,fp); 
    fputc(ch,fp);
     chr=fgetc(fp);
    fgets(str,8,fp);
   //printf("the chracter i read is :%c",chr);  //can read and both write but one at a time 
   // printf("\nthe string i read is :%s",str);
   fclose(fp);
    return 0;
}