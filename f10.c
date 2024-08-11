//to open text file for appending a chracter and string to the file  (a+) mode " it append to   the previous conten of file 
//to append a (string and chracter) using fputs() and fputc() function in the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char st[10]="btech" ,ch='C',chr,str[10];
    fp=fopen("f1.txt","a+");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
    //fputs(st,fp); 
    //fputc(ch,fp);
   chr=fgetc(fp);
    fgets(str,8,fp);
   printf("the chracter i read is :%c",chr);
    printf("\nthe string i read is :%s",str);
    fclose(fp);
    return 0;
}