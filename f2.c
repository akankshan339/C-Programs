//writing a file 
//original content in file ..for eg. my name is akanksha
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
char str[60]="while writing file original content of file gets removed";//this line will get printed in file
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("no such file exist ");
        exit(1);
    }
     fprintf(fp,"%s",str);  //whatever is in the string print it in the file
    fclose(fp);
    return 0;
}